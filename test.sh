#!/usr/bin/env bash
# =============================================================================
#  Arch DWM Installer (Self-Healing) — v1
#  - Menü (dialog): DWM+Alacritty+dmenu, picom, feh, PipeWire, Fish, TLP, ZRAM
#  - Selbstheilend: Auto-Download/-Rebuild bei Fehlern, 3x Retry, Repair-Modus
#  - User-Config in ~/.config/dwm, Autostart über TTY1
#  - Logging: /var/log/dwm-install.log
# =============================================================================

set -Eeuo pipefail

LOGFILE="/var/log/dwm-install.log"
mkdir -p "$(dirname "$LOGFILE")" || true
touch "$LOGFILE" || true
exec > >(tee -a "$LOGFILE") 2>&1

# ------------------------ UI Helpers ------------------------
COLOR_INFO="\033[1;32m"; COLOR_WARN="\033[1;33m"; COLOR_ERR="\033[1;31m"; COLOR_RST="\033[0m"
info(){ echo -e "${COLOR_INFO}[INFO]${COLOR_RST} $*"; }
warn(){ echo -e "${COLOR_WARN}[WARN]${COLOR_RST} $*"; }
err(){  echo -e "${COLOR_ERR}[ERR ]${COLOR_RST} $*" >&2; }

trap 'err "Fehler in Zeile $LINENO. Siehe Log: $LOGFILE"' ERR

# ------------------------ Guards ------------------------
need_root(){ [ "$(id -u)" = "0" ] || { err "Bitte als root/mit sudo ausführen."; exit 1; }; }
need_arch(){
  . /etc/os-release
  [[ ${ID,,} = "arch" || ${ID_LIKE:-} =~ arch ]] || { err "Dieses Skript ist nur für Arch Linux."; exit 1; }
}

# ------------------------ Retry Wrapper ------------------------
retry(){
  local tries="${1:-3}"; shift
  local delay=5 i=1
  until "$@"; do
    if (( i >= tries )); then return 1; fi
    warn "Befehl fehlgeschlagen (Versuch $i/$tries): $*"
    sleep "$delay"; i=$((i+1))
  done
}

# ------------------------ Package Helpers ------------------------
have(){ command -v "$1" >/dev/null 2>&1; }
pkg_installed(){ pacman -Q "$1" >/dev/null 2>&1; }

pkgs_install(){
  local pkgs=() p
  for p in "$@"; do
    pkg_installed "$p" || pkgs+=("$p")
  done
  (( ${#pkgs[@]} == 0 )) && return 0
  info "Installiere Pakete: ${pkgs[*]}"
  retry 3 pacman -Sy --noconfirm --needed "${pkgs[@]}"
}

ensure_build_stack(){
  pkgs_install base-devel git xorg-server xorg-xinit libx11 libxft libxinerama ttf-dejavu
}

ensure_dialog(){
  have dialog || pkgs_install dialog
}

# ------------------------ User Selection ------------------------
select_target_user(){
  if [ -n "${SUDO_USER:-}" ] && [ "$SUDO_USER" != "root" ]; then
    TARGET_USER="$SUDO_USER"
  else
    ensure_dialog
    local guess
    guess="$(awk -F: '$3>=1000 && $1!="nobody"{print $1; exit}' /etc/passwd || true)"
    dialog --inputbox "Als welcher Benutzer sollen die DWM-Configs eingerichtet werden?\n(Nicht 'root')" 10 72 "${guess:-}" 2>/tmp/target_user.txt || { err "Abgebrochen."; exit 1; }
    TARGET_USER="$(cat /tmp/target_user.txt)"
  fi
  id "$TARGET_USER" >/dev/null 2>&1 || { err "Benutzer '$TARGET_USER' existiert nicht."; exit 1; }
  USER_HOME="$(getent passwd "$TARGET_USER" | cut -d: -f6)"
  [ -d "$USER_HOME" ] || { err "HOME für $TARGET_USER nicht gefunden."; exit 1; }
  info "Zielbenutzer: $TARGET_USER ($USER_HOME)"
}

as_user(){
  sudo -u "$TARGET_USER" env HOME="$USER_HOME" XDG_CONFIG_HOME="$USER_HOME/.config" bash -lc "$*"
}

# ------------------------ Menu ------------------------
run_menu(){
  ensure_dialog
  dialog --checklist "Wähle Komponenten (Leertaste=toggle, Enter=OK)" 20 86 10 \
    BASE_DWM   "DWM (Source) + Alacritty (Super+Return) + dmenu" ON \
    PICOM      "Compositor (picom)"                               ON \
    FEH        "feh (Wallpaper) + Handling"                        ON \
    PIPEWIRE   "PipeWire (pipewire-alsa/pulse, wireplumber)"       ON \
    FISH       "Fish Shell (als Default setzen)"                   ON \
    TLP        "TLP Stromsparen (enable Service)"                  OFF \
    ZRAM       "ZRAM (zram-generator, 50% RAM)"                    OFF \
    RESCUE     "Rescue-Tools (Repair-Menü installieren)"           ON \
    2>/tmp/choices.txt || { err "Abgebrochen."; exit 1; }
  CHOICES="$(tr -d '"' < /tmp/choices.txt)"
  info "Auswahl: $CHOICES"
}
sel(){ grep -qw "$1" <<<"$CHOICES"; }

# ------------------------ Paths & Constants ------------------------
DWM_SRC="/usr/local/src/dwm"
DWM_REPO="https://git.suckless.org/dwm"
PICOM_CFG_REL=".config/dwm/picom.conf"
AUTOSTART_REL=".config/dwm/autostart.sh"
XINITRC_REL=".xinitrc"
CFG_DIR_REL=".config/dwm"
WALLPAPER_REL=".config/dwm/wallpaper.png"

backup_file(){
  local path="$1"
  [ -f "$path" ] || return 0
  local ts; ts="$(date +%Y%m%d-%H%M%S)"
  cp -a "$path" "${path}.bak-${ts}" || true
}

# ------------------------ Downloaders ------------------------
write_dwm_config_h(){
  # Minimal config.h mit Alacritty & sane defaults
  cat > "$DWM_SRC/config.h" <<'EOF'
#include <X11/XF86keysym.h>
static const unsigned int borderpx  = 2;
static const unsigned int snap      = 10;
static const int showbar            = 1;
static const int topbar             = 1;
static const char *fonts[]          = { "DejaVuSansMono:size=10" };
static const char dmenufont[]       = "DejaVuSansMono:size=10";
static const char col_gray1[] = "#222222", col_gray2[] = "#444444",
                 col_gray3[] = "#bbbbbb", col_gray4[] = "#eeeeee",
                 col_cyan[]  = "#005577";
static const char *colors[][3] = {
  [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
  [SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};
static const char *tags[] = { "1","2","3","4","5","6","7","8","9" };
static const Rule rules[] = { { "Gimp", NULL, NULL, 0, 1, -1 }, };
static const float mfact = 0.55; static const int nmaster = 1; static const int resizehints = 1;
static const Layout layouts[] = { { "[]=", tile }, { "><>", NULL }, { "[M]", monocle }, };
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
{ MODKEY, KEY, view, {.ui = 1 << TAG} }, \
{ MODKEY|ControlMask, KEY, toggleview, {.ui = 1 << TAG} }, \
{ MODKEY|ShiftMask, KEY, tag, {.ui = 1 << TAG} }, \
{ MODKEY|ControlMask|ShiftMask, KEY, toggletag, {.ui = 1 << TAG} },
static const char *termcmd[]  = { "alacritty", NULL };
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, NULL };
static Key keys[] = {
  { MODKEY, XK_p, spawn, {.v = dmenucmd } },
  { MODKEY, XK_Return, spawn, {.v = termcmd } },
  { MODKEY, XK_b, togglebar, {0} },
  { MODKEY, XK_j, focusstack, {.i = +1 } },
  { MODKEY, XK_k, focusstack, {.i = -1 } },
  { MODKEY, XK_h, setmfact, {.f = -0.05} },
  { MODKEY, XK_l, setmfact, {.f = +0.05} },
  { MODKEY, XK_Tab, view, {0} },
  { MODKEY|ShiftMask, XK_c, killclient, {0} },
  { MODKEY, XK_t, setlayout, {.v = &layouts[0]} },
  { MODKEY, XK_f, setlayout, {.v = &layouts[1]} },
  { MODKEY, XK_m, setlayout, {.v = &layouts[2]} },
  { MODKEY, XK_space, setlayout, {0} },
  { MODKEY|ShiftMask, XK_space, togglefloating, {0} },
  { MODKEY, XK_0, view, {.ui = ~0 } },
  { MODKEY|ShiftMask, XK_0, tag, {.ui = ~0 } },
  TAGKEYS( XK_1, 0 ) TAGKEYS( XK_2, 1 ) TAGKEYS( XK_3, 2 )
  TAGKEYS( XK_4, 3 ) TAGKEYS( XK_5, 4 ) TAGKEYS( XK_6, 5 )
  TAGKEYS( XK_7, 6 ) TAGKEYS( XK_8, 7 ) TAGKEYS( XK_9, 8 )
  { MODKEY|ShiftMask, XK_q, quit, {0} },
};
static Button buttons[] = {
  { ClkLtSymbol, 0, Button1, setlayout, {0} },
  { ClkLtSymbol, 0, Button3, setlayout, {.v = &layouts[2]} },
  { ClkWinTitle, 0, Button2, zoom, {0} },
  { ClkStatusText, 0, Button2, spawn, {.v = termcmd } },
  { ClkClientWin, MODKEY, Button1, movemouse, {0} },
  { ClkClientWin, MODKEY, Button2, togglefloating, {0} },
  { ClkClientWin, MODKEY, Button3, resizemouse, {0} },
  { ClkTagBar, 0, Button1, view, {0} },
  { ClkTagBar, 0, Button3, toggleview, {0} },
  { ClkTagBar, MODKEY, Button1, tag, {0} },
  { ClkTagBar, MODKEY, Button3, toggletag, {0} },
};
EOF
}

ensure_user_config(){
  local cfgdir="$USER_HOME/$CFG_DIR_REL"
  mkdir -p "$cfgdir"
  chown -R "$TARGET_USER:$TARGET_USER" "$cfgdir"

  # autostart.sh
  local autostart="$USER_HOME/$AUTOSTART_REL"
  if [ -f "$autostart" ]; then backup_file "$autostart"; fi
  as_user "cat > '$autostart' <<'EOS'
#!/usr/bin/env bash
# DWM Autostart
if command -v feh >/dev/null 2>&1 && [ -f \"$HOME/.config/dwm/wallpaper.png\" ]; then
  feh --bg-scale \"$HOME/.config/dwm/wallpaper.png\"
else
  xsetroot -solid '#303030'
fi
if command -v picom >/dev/null 2>&1; then
  pgrep -x picom >/dev/null || picom --experimental-backends --daemon
fi
while true; do xsetroot -name \"\$(date '+%a %Y-%m-%d %H:%M')\"; sleep 30; done &
EOS
chmod +x '$autostart'
"

  # picom.conf
  local picomcfg="$USER_HOME/$PICOM_CFG_REL"
  if [ -f "$picomcfg" ]; then backup_file "$picomcfg"; fi
  as_user "cat > '$picomcfg' <<'EOS'
backend = \"glx\";
vsync = true;
shadow = false;
fading = false;
detect-client-opacity = true;
detect-transient = true;
detect-rounded-corners = true;
EOS
"

  # .xinitrc
  local xinitrc="$USER_HOME/$XINITRC_REL"
  if [ -f "$xinitrc" ]; then backup_file "$xinitrc"; fi
  as_user "cat > '$xinitrc' <<'EOS'
#!/usr/bin/env bash
[ -x \"$HOME/.config/dwm/autostart.sh\" ] && \"$HOME/.config/dwm/autostart.sh\" &
xsetroot -cursor_name left_ptr
exec dwm
EOS
chmod +x '$xinitrc'
"

  # Wallpaper von Script-Verzeichnis übernehmen (optional)
  local script_dir; script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
  if [ -f "$script_dir/wallpaper.png" ]; then
    install -m 0644 "$script_dir/wallpaper.png" "$USER_HOME/$WALLPAPER_REL"
    chown "$TARGET_USER:$TARGET_USER" "$USER_HOME/$WALLPAPER_REL"
  fi
}

enable_tty1_autostart(){
  # .bash_profile
  as_user "grep -q 'exec startx' ~/.bash_profile 2>/dev/null || cat > ~/.bash_profile <<'EOS'
if [ -z \"\$DISPLAY\" ] && [ \"\$(tty)\" = \"/dev/tty1\" ]; then
  exec startx
fi
EOS
"
  # .profile Fallback
  as_user "grep -q 'exec startx' ~/.profile 2>/dev/null || cat >> ~/.profile <<'EOS'

if [ -z \"\$DISPLAY\" ] && [ \"\$(tty)\" = \"/dev/tty1\" ]; then
  exec startx
fi
EOS
"
}

# ------------------------ Builders (Self-Healing) ------------------------
clone_or_update_dwm(){
  mkdir -p "$DWM_SRC"
  if [ -d "$DWM_SRC/.git" ]; then
    info "Update DWM-Repo..."
    (cd "$DWM_SRC" && retry 3 git fetch --depth=1 && git reset --hard origin/master)
  else
    info "Clone DWM-Repo..."
    retry 3 git clone --depth=1 "$DWM_REPO" "$DWM_SRC"
  fi
}

build_and_install_dwm(){
  info "Baue und installiere DWM..."
  pushd "$DWM_SRC" >/dev/null
  # Stelle sicher, dass config.h existiert (ggf. neu schreiben)
  if [ ! -f config.h ]; then
    warn "config.h fehlt — erstelle Standard mit Alacritty..."
    write_dwm_config_h
  fi
  retry 3 make clean || true
  if ! retry 3 make; then
    warn "make fehlgeschlagen — Repo neu holen & erneut bauen..."
    rm -rf "$DWM_SRC"
    clone_or_update_dwm
    write_dwm_config_h
    retry 3 make clean || true
    retry 3 make
  fi
  retry 3 make install
  popd >/dev/null
  info "DWM installiert nach /usr/local/bin/dwm"
}

# ------------------------ Optional Components ------------------------
install_base_stack(){
  ensure_build_stack
  pkgs_install dmenu alacritty
}

install_picom(){ pkgs_install picom; }
install_feh(){ pkgs_install feh; }
install_pipewire(){ pkgs_install pipewire pipewire-alsa pipewire-pulse wireplumber; }
install_fish(){ pkgs_install fish; chsh -s /usr/bin/fish "$TARGET_USER" || warn "chsh für $TARGET_USER fehlgeschlagen (evtl. ok)."; }
install_tlp(){ pkgs_install tlp tlp-rdw; systemctl enable tlp >/dev/null 2>&1 || true; }
install_zram(){
  pkgs_install zram-generator
  cat >/etc/systemd/zram-generator.conf <<'EOF'
[zram0]
zram-size = ram / 2
compression-algorithm = zstd
EOF
  systemctl daemon-reload
  systemctl enable systemd-zram-setup@zram0.service >/dev/null 2>&1 || true
  systemctl start  systemd-zram-setup@zram0.service  >/dev/null 2>&1 || true
}

# ------------------------ Repair Mode ------------------------
repair_all(){
  info "Repair-Modus: Prüfe & repariere Installation…"

  # Essentials
  ensure_build_stack
  pkg_installed dmenu || pkgs_install dmenu
  have alacritty || pkgs_install alacritty

  # DWM Source
  if [ ! -x /usr/local/bin/dwm ]; then
    warn "/usr/local/bin/dwm fehlt — (re)installiere…"
  fi
  if [ ! -d "$DWM_SRC" ] || [ ! -d "$DWM_SRC/.git" ]; then
    warn "DWM-Quellen fehlen — klone neu…"
    rm -rf "$DWM_SRC"; clone_or_update_dwm
  else
    clone_or_update_dwm
  fi
  [ -f "$DWM_SRC/config.h" ] || write_dwm_config_h
  build_and_install_dwm

  # User configs
  ensure_user_config
  enable_tty1_autostart

  info "Repair-Modus abgeschlossen."
}

# ------------------------ Rescue Menu (optional) ------------------------
install_rescue_shortcut(){
  cat >/usr/local/bin/dwm-rescue <<'EOS'
#!/usr/bin/env bash
set -Eeuo pipefail
menu(){
  dialog --menu "DWM Rescue" 15 60 6 \
    1 "DWM neu bauen" \
    2 "Wallpaper neu setzen" \
    3 "picom neu starten" \
    4 "X neu starten (dwm neu)" \
    5 "Abbrechen" 2>/tmp/dwm_rescue_choice || exit 0
  case "$(cat /tmp/dwm_rescue_choice)" in
    1) sudo bash -lc 'cd /usr/local/src/dwm && make clean && make && make install' && dialog --msgbox "DWM neu gebaut." 6 40;;
    2) if command -v feh >/dev/null 2>&1 && [ -f "$HOME/.config/dwm/wallpaper.png" ]; then feh --bg-scale "$HOME/.config/dwm/wallpaper.png"; dialog --msgbox "Wallpaper gesetzt." 6 40; else dialog --msgbox "feh oder Wallpaper fehlt." 6 40; fi ;;
    3) pkill -x picom || true; (picom --experimental-backends --daemon &) && dialog --msgbox "picom neu gestartet." 6 40;;
    4) pkill -x Xorg || true;;
    5) exit 0;;
  esac
}
menu
EOS
  chmod +x /usr/local/bin/dwm-rescue
}

# ------------------------ Main Flow ------------------------
main(){
  need_root; need_arch

  # parse args
  if [[ "${1:-}" == "--repair" ]]; then
    # Bei Repair brauchen wir den Benutzer für Pfade
    select_target_user
    repair_all
    info "Fertig. Log: $LOGFILE"
    return 0
  fi

  select_target_user
  run_menu

  if sel BASE_DWM; then
    install_base_stack
    clone_or_update_dwm
    write_dwm_config_h
    build_and_install_dwm
  fi
  sel PICOM   && install_picom
  sel FEH     && install_feh
  sel PIPEWIRE&& install_pipewire
  sel FISH    && install_fish
  sel TLP     && install_tlp
  sel ZRAM    && install_zram
  sel RESCUE  && install_rescue_shortcut

  ensure_user_config
  enable_tty1_autostart

  ensure_dialog
  dialog --msgbox "Installation abgeschlossen.\n\nBenutzer: $TARGET_USER\nAutostart: TTY1 → startx → DWM\nTerminal: Super+Return (Alacritty)\nRescue: 'dwm-rescue' (falls gewählt)\nLog: $LOGFILE" 12 64

  info "Fertig. Bitte als $TARGET_USER auf TTY1 einloggen. DWM startet automatisch."
}

main "$@"
