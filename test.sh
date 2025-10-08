#!/usr/bin/env bash
# ============================================================================
#  DWM Installer for Arch Linux (Menu/TUI) — by DennisHilk
#  Features:
#    - DWM from source (suckless) with Alacritty on Super+Return
#    - dmenu, picom, feh (Wallpaper), PipeWire, Fish, TLP, ZRAM (optional)
#    - Clean user config in ~/.config/dwm with autostart + xinitrc
#    - Auto-start DWM on TTY1 (no display manager)
# ============================================================================

set -u

# ---------- Helpers ----------
die() { echo "ERROR: $*" >&2; exit 1; }
info() { echo -e "\033[1;32m[INFO]\033[0m $*"; }
warn() { echo -e "\033[1;33m[WARN]\033[0m $*"; }

need_root() {
  [ "$(id -u)" = "0" ] || die "Bitte als root/mit sudo ausführen."
}

need_arch() {
  if ! grep -qiE 'ID=arch' /etc/os-release; then
    die "Dieses Skript ist für Arch Linux. /etc/os-release zeigt kein Arch an."
  fi
}

ensure_dialog() {
  if ! command -v dialog >/dev/null 2>&1; then
    info "dialog fehlt — installiere..."
    pacman -Sy --noconfirm --needed dialog || die "dialog-Installation fehlgeschlagen."
  fi
}

select_target_user() {
  # Bevorzugt den Benutzer, der sudo aufgerufen hat
  if [ -n "${SUDO_USER:-}" ] && [ "${SUDO_USER}" != "root" ]; then
    TARGET_USER="$SUDO_USER"
  else
    # Versuche den "erstbesten" regulären Benutzer vorzuschlagen
    CANDIDATE="$(awk -F: '$3>=1000 && $1!="nobody"{print $1; exit}' /etc/passwd)"
    TARGET_USER="${CANDIDATE:-}"
    ensure_dialog
    dialog --inputbox "Als welcher Benutzer sollen die DWM-Konfigs eingerichtet werden?\n(Hinweis: Nicht 'root')" 10 70 "${TARGET_USER}" 2>/tmp/target_user.txt || die "Abgebrochen."
    TARGET_USER="$(cat /tmp/target_user.txt)"
  fi

  id "$TARGET_USER" >/dev/null 2>&1 || die "Benutzer '$TARGET_USER' existiert nicht."
  USER_HOME="$(getent passwd "$TARGET_USER" | cut -d: -f6)"
  [ -d "$USER_HOME" ] || die "HOME-Verzeichnis für $TARGET_USER nicht gefunden."
  info "Zielbenutzer: $TARGET_USER ($USER_HOME)"
}

as_user() {
  sudo -u "$TARGET_USER" env HOME="$USER_HOME" XDG_CONFIG_HOME="$USER_HOME/.config" bash -lc "$*"
}

# ---------- Package helpers ----------
pkgs_install() {
  local pkgs=("$@")
  pacman -Sy --noconfirm --needed "${pkgs[@]}"
}

# ---------- Selections (menu) ----------
run_menu() {
  ensure_dialog
  dialog --checklist "Wähle die Komponenten (Leertaste=toggle, Enter=OK)" 18 80 10 \
    BASE_DWM   "DWM (mit Alacritty auf Super+Return) + dmenu + Xorg" ON \
    PICOM      "Compositor (picom)"                                  ON \
    FEH        "feh (Wallpaper setzen) + Wallpaper-Handling"          ON \
    PIPEWIRE   "PipeWire (pipewire, -alsa, -pulse, wireplumber)"      ON \
    FISH       "Fish Shell (als Standardshell setzen)"                ON \
    TLP        "TLP Stromsparen (enable systemd service)"             OFF \
    ZRAM       "ZRAM via zram-generator (50% RAM)"                    OFF \
    2> /tmp/choices.txt

  [ $? -eq 0 ] || die "Abgebrochen."
  CHOICES="$(tr -d '"' < /tmp/choices.txt)"
  info "Auswahl: $CHOICES"
}

sel() {
  grep -qw "$1" <<<"$CHOICES"
}

# ---------- Installers ----------
install_base_xorg() {
  info "Installiere Basis (xorg-server, xorg-xinit, git, base-devel, fonts)..."
  pkgs_install xorg-server xorg-xinit git base-devel \
               libx11 libxinerama libxft \
               ttf-dejavu
}

install_dmenu() {
  info "Installiere dmenu (Paket)..."
  pkgs_install dmenu
}

install_alacritty() {
  info "Installiere Alacritty..."
  pkgs_install alacritty
}

install_dwm_from_source() {
  info "DWM aus Source (suckless) installieren (mit Alacritty auf Super+Return)..."
  # Build deps sind schon via install_base_xorg da
  local build_dir="/usr/local/src/dwm"
  mkdir -p "$build_dir"
  if [ ! -d "$build_dir/.git" ]; then
    git clone --depth=1 https://git.suckless.org/dwm "$build_dir" || die "Clone dwm fehlgeschlagen."
  else
    (cd "$build_dir" && git fetch --depth=1 && git reset --hard origin/master)
  fi

  # config.h anpassen: terminal = "alacritty"; keybinding Super+Return -> alacritty
  # Wir erzeugen eine minimal gepatchte config.h auf Basis der Standard-Config.
  local cfg="$build_dir/config.h"
  if [ ! -f "$cfg.orig" ]; then
    cp -f "$cfg" "$cfg.orig"
  fi

  cat > "$cfg" <<'EOF'
/* Minimal config.h with Alacritty & sensible defaults */
#include <X11/XF86keysym.h>

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int snap      = 10;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "DejaVuSansMono:size=10" };
static const char dmenufont[]       = "DejaVuSansMono:size=10";

/* colors */
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char *colors[][3]      = {
  /*               fg         bg         border   */
  [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
  [SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};

/* tagging */
static const char *tags[] = { "1","2","3","4","5","6","7","8","9" };

/* rules */
static const Rule rules[] = {
  /* xprop(1):
   *  WM_CLASS(STRING) = instance, class
   *  WM_NAME(STRING) = title
   */
  /* class      instance    title       tags mask     isfloating   monitor */
  { "Gimp",     NULL,       NULL,       0,            1,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const Layout layouts[] = {
  /* symbol     arrange function */
  { "[]=",      tile },    /* first entry is default */
  { "><>",      NULL },    /* no layout function means floating behavior */
  { "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
  { MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
  { MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
  { MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
  { MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands */
static const char *termcmd[]  = { "alacritty", NULL };
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, NULL };

static Key keys[] = {
  /* modifier                     key        function        argument */
  { MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
  { MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
  { MODKEY,                       XK_b,      togglebar,      {0} },
  { MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
  { MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
  { MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
  { MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
  { MODKEY,                       XK_Return, zoom,           {0} }, /* duplicate ok, spawn above takes effect */
  { MODKEY,                       XK_Tab,    view,           {0} },
  { MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
  { MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
  { MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
  { MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
  { MODKEY,                       XK_space,  setlayout,      {0} },
  { MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
  { MODKEY,                       XK_0,      view,           {.ui = ~0 } },
  { MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
  TAGKEYS(                        XK_1,                      0)
  TAGKEYS(                        XK_2,                      1)
  TAGKEYS(                        XK_3,                      2)
  TAGKEYS(                        XK_4,                      3)
  TAGKEYS(                        XK_5,                      4)
  TAGKEYS(                        XK_6,                      5)
  TAGKEYS(                        XK_7,                      6)
  TAGKEYS(                        XK_8,                      7)
  TAGKEYS(                        XK_9,                      8)
  { MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

static Button buttons[] = {
  { ClkLtSymbol,          0,              Button1, setlayout,      {0} },
  { ClkLtSymbol,          0,              Button3, setlayout,      {.v = &layouts[2]} },
  { ClkWinTitle,          0,              Button2, zoom,           {0} },
  { ClkStatusText,        0,              Button2, spawn,          {.v = termcmd } },
  { ClkClientWin,         MODKEY,         Button1, movemouse,      {0} },
  { ClkClientWin,         MODKEY,         Button2, togglefloating, {0} },
  { ClkClientWin,         MODKEY,         Button3, resizemouse,    {0} },
  { ClkTagBar,            0,              Button1, view,           {0} },
  { ClkTagBar,            0,              Button3, toggleview,     {0} },
  { ClkTagBar,            MODKEY,         Button1, tag,            {0} },
  { ClkTagBar,            MODKEY,         Button3, toggletag,      {0} },
};
EOF

  (cd "$build_dir" && make clean && make) || die "dwm build fehlgeschlagen."
  (cd "$build_dir" && make install) || die "dwm Installation (make install) fehlgeschlagen."
  info "dwm installiert nach /usr/local/bin/dwm"
}

install_picom()   { pkgs_install picom; }
install_feh()     { pkgs_install feh; }
install_pipewire(){ pkgs_install pipewire pipewire-alsa pipewire-pulse wireplumber; }
install_fish()    { pkgs_install fish; chsh -s /usr/bin/fish "$TARGET_USER" || warn "chsh für $TARGET_USER nicht möglich (evtl. okay)."; }
install_tlp()     { pkgs_install tlp tlp-rdw; systemctl enable tlp >/dev/null 2>&1 || true; }
install_zram() {
  pkgs_install zram-generator
  cat >/etc/systemd/zram-generator.conf <<'EOF'
# zram-generator configuration
[zram0]
zram-size = ram / 2
compression-algorithm = zstd
EOF
  systemctl daemon-reload
  # Starten (falls Service vorhanden); sonst wirkt es ab dem nächsten Boot
  if systemctl list-unit-files | grep -q 'systemd-zram-setup@.service'; then
    systemctl enable systemd-zram-setup@zram0.service >/dev/null 2>&1 || true
    systemctl start  systemd-zram-setup@zram0.service >/dev/null 2>&1 || true
  fi
}

# ---------- User config (~/.config/dwm) ----------
deploy_user_config() {
  info "Erzeuge Benutzerkonfiguration in $USER_HOME/.config/dwm ..."
  as_user "mkdir -p ~/.config/dwm"
  # autostart
  as_user "cat > ~/.config/dwm/autostart.sh <<'EOS'
#!/usr/bin/env bash
# Autostart für DWM
# Setze Wallpaper (falls vorhanden), sonst grauer Hintergrund
if command -v feh >/dev/null 2>&1 && [ -f \"\$HOME/.config/dwm/wallpaper.png\" ]; then
  feh --bg-scale \"\$HOME/.config/dwm/wallpaper.png\"
else
  xsetroot -solid '#303030'
fi

# Starte picom, falls vorhanden
if command -v picom >/dev/null 2>&1; then
  pgrep -x picom >/dev/null || picom --experimental-backends --daemon
fi

# Ein schlichtes Status-Update (optional): Uhrzeit in Titel setzen
# (Verursacht keine Build-Abhängigkeiten wie slstatus)
while true; do
  xsetroot -name \"\$(date '+%a %Y-%m-%d %H:%M')\"
  sleep 30
done &
EOS
chmod +x ~/.config/dwm/autostart.sh
"

  # xinitrc
  as_user "cat > ~/.xinitrc <<'EOS'
#!/usr/bin/env bash
# Benutzer Xinit für DWM
# Starte Autostart
[ -x \"$HOME/.config/dwm/autostart.sh\" ] && \"$HOME/.config/dwm/autostart.sh\" &

# Cursor hübscher
xsetroot -cursor_name left_ptr

# Starte dwm
exec dwm
EOS
chmod +x ~/.xinitrc
"

  # Optional: picom.conf Beispiel
  as_user "cat > ~/.config/dwm/picom.conf <<'EOS'
# Minimal picom config
backend = \"glx\";
vsync = true;
shadow = false;
fading = false;
detect-client-opacity = true;
detect-transient = true;
detect-rounded-corners = true;
EOS
"
  # Wallpaper, wenn neben Skript vorhanden
  SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
  if [ -f "$SCRIPT_DIR/wallpaper.png" ]; then
    info "Kopiere wallpaper.png nach Benutzerkonfiguration..."
    install -m 0644 "$SCRIPT_DIR/wallpaper.png" "$USER_HOME/.config/dwm/wallpaper.png"
    chown "$TARGET_USER:$TARGET_USER" "$USER_HOME/.config/dwm/wallpaper.png"
  fi
}

enable_tty1_autostart() {
  info "Richte Auto-Start von DWM auf TTY1 ein (ohne Display-Manager)..."
  # .bash_profile (falls Zsh/Fish später genutzt wird, bleibt das unkritisch,
  # weil Login-Shells typischerweise .bash_profile nicht lesen. Wir ergänzen auch .profile)
  as_user "cat > ~/.bash_profile <<'EOS'
# Starte X nur auf TTY1 und wenn nicht bereits in X
if [ -z \"\$DISPLAY\" ] && [ \"\$(tty)\" = \"/dev/tty1\" ]; then
  exec startx
fi
EOS
"

  # .profile als Fallback (für Shells, die .bash_profile nicht lesen)
  as_user "grep -q 'startx' ~/.profile 2>/dev/null || cat >> ~/.profile <<'EOS'

# Auto-start X on tty1 (fallback)
if [ -z \"\$DISPLAY\" ] && [ \"\$(tty)\" = \"/dev/tty1\" ]; then
  exec startx
fi
EOS
"
}

# ---------- Flow ----------
main() {
  need_root
  need_arch
  select_target_user
  run_menu

  # Basis & Xorg & Tools, wenn DWM gewählt
  if sel BASE_DWM; then
    install_base_xorg
    install_alacritty
    install_dmenu
    install_dwm_from_source
  fi
  sel PICOM   && install_picom
  sel FEH     && install_feh
  sel PIPEWIRE&& install_pipewire
  sel FISH    && install_fish
  sel TLP     && install_tlp
  sel ZRAM    && install_zram

  deploy_user_config
  enable_tty1_autostart

  info "Fertig! Melde dich als $TARGET_USER an und wechsle auf TTY1 (Ctrl+Alt+F1)."
  info "Nach dem Login startet DWM automatisch. Terminal: Super+Return (Alacritty)."
  info "Wallpaper: $USER_HOME/.config/dwm/wallpaper.png (falls vorhanden)."
  info "Picom: wird automatisch gestartet, wenn installiert."
  info "Zum manuellen Start: 'startx' als $TARGET_USER."
  ensure_dialog
  dialog --msgbox "Installation abgeschlossen.\n\nBenutzer: $TARGET_USER\nAutostart: TTY1 -> startx -> DWM\nTerminal: Super+Return (Alacritty)\nConfig: ~/.config/dwm" 12 60
}

main "$@"
