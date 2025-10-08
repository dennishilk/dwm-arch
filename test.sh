#!/usr/bin/env bash
# ════════════════════════════════════════════════
# 🐧 Arch Linux DWM Ultimate v6.2 (by Dennis Hilk)
# https://github.com/dennishilk
# ════════════════════════════════════════════════

set -e

USER_HOME="/home/$SUDO_USER"

echo "=== 🧩 Updating Arch system..."
pacman -Syu --noconfirm

echo "=== ⚙️ Installing essential packages..."
pacman -S --needed --noconfirm \
  git base-devel xorg xorg-xinit xorg-xrandr \
  alacritty feh picom fish rofi xwallpaper network-manager-applet \
  pipewire pipewire-alsa pipewire-pulse wireplumber \
  curl wget unzip fastfetch xorg-xmodmap mesa

# ────────────────────────────────────────────────
# 🎮 GPU Auto-Detect
# ────────────────────────────────────────────────
echo "=== 🎮 Detecting GPU and installing drivers..."
GPU=$(lspci | grep -E "VGA|3D" | grep -E "NVIDIA|AMD|Intel" || true)

if echo "$GPU" | grep -q "NVIDIA"; then
    echo "→ NVIDIA GPU detected"
    pacman -S --needed --noconfirm nvidia nvidia-utils nvidia-settings
elif echo "$GPU" | grep -q "AMD"; then
    echo "→ AMD GPU detected"
    pacman -S --needed --noconfirm xf86-video-amdgpu mesa
elif echo "$GPU" | grep -q "Intel"; then
    echo "→ Intel GPU detected"
    pacman -S --needed --noconfirm mesa xf86-video-intel
else
    echo "⚠️ No supported GPU detected – using default Mesa drivers."
    pacman -S --needed --noconfirm mesa
fi

# ────────────────────────────────────────────────
# 💾 ZRAM Setup
# ────────────────────────────────────────────────
echo "=== 💾 Enabling ZRAM..."
cat << 'EOF' > /etc/systemd/zram-generator.conf
[zram0]
zram-size = ram / 2
compression-algorithm = zstd
EOF
systemctl enable --now systemd-zram-setup@zram0.service || true

# ────────────────────────────────────────────────
# 🏗️ DWM Directory
# ────────────────────────────────────────────────
echo "=== 🏗️ Creating DWM config folder..."
mkdir -p "$USER_HOME/.config/dwm"
chown -R $SUDO_USER:$SUDO_USER "$USER_HOME/.config/dwm"
cd "$USER_HOME/.config/dwm"

# ────────────────────────────────────────────────
# 🧩 Clone suckless tools
# ────────────────────────────────────────────────
echo "=== 🧱 Cloning DWM, ST and DMENU..."
sudo -u $SUDO_USER git clone https://git.suckless.org/dwm
sudo -u $SUDO_USER git clone https://git.suckless.org/st
sudo -u $SUDO_USER git clone https://git.suckless.org/dmenu

# ────────────────────────────────────────────────
# ⚙️ Patch DWM for Super key + Alacritty
# ────────────────────────────────────────────────
echo "=== 🧠 Patching DWM for Super key and Alacritty..."
cd "$USER_HOME/.config/dwm/dwm"
sudo -u $SUDO_USER cp -n config.def.h config.h

# Alt → Super
sudo -u $SUDO_USER sed -i 's/Mod1Mask/Mod4Mask/g' config.h
# Terminal auf Alacritty setzen
sudo -u $SUDO_USER sed -i 's|"st"|"alacritty"|g' config.h

# Fallback: Keybinding sicherstellen
if ! grep -q 'alacritty' config.h; then
  echo 'static const char *termcmd[]  = { "alacritty", NULL };' >> config.h
  echo '{ MODKEY, XK_Return, spawn, {.v = termcmd } },' >> config.h
fi

echo "=== 🔨 Building and installing..."
make clean install
cd "$USER_HOME/.config/dwm/st" && make clean install
cd "$USER_HOME/.config/dwm/dmenu" && make clean install

# ────────────────────────────────────────────────
# 🧠 Autostart Script
# ────────────────────────────────────────────────
echo "=== 🧠 Creating autostart.sh..."
cat << 'EOF' > "$USER_HOME/.config/dwm/autostart.sh"
#!/bin/bash
# ────────────────────────────────────────────────
# Autostart script for DWM Ultimate v6.2
# ────────────────────────────────────────────────

# Fix Super key mapping (if Mod4 not set)
xmodmap -e "clear mod4" -e "add mod4 = Super_L Super_R"

# Wallpaper
if [ -f ~/.config/dwm/wallpaper.png ]; then
    feh --bg-scale ~/.config/dwm/wallpaper.png &
fi

# Compositor
picom --experimental-backends --config ~/.config/dwm/picom.conf &

# Network
nm-applet &

# Audio
pipewire &
wireplumber &
EOF
chmod +x "$USER_HOME/.config/dwm/autostart.sh"
chown $SUDO_USER:$SUDO_USER "$USER_HOME/.config/dwm/autostart.sh"

# ────────────────────────────────────────────────
# 🧠 XINITRC
# ────────────────────────────────────────────────
echo "=== 🧩 Creating ~/.xinitrc ..."
cat << 'EOF' > "$USER_HOME/.xinitrc"
#!/bin/sh
~/.config/dwm/autostart.sh &
exec dwm
EOF
chmod +x "$USER_HOME/.xinitrc"
chown $SUDO_USER:$SUDO_USER "$USER_HOME/.xinitrc"

# ────────────────────────────────────────────────
# 🐚 Fish shell + Fastfetch setup
# ────────────────────────────────────────────────
echo "=== 🐚 Setting Fish as default shell..."
chsh -s /usr/bin/fish $SUDO_USER
mkdir -p "$USER_HOME/.config/fish"

# Fish Config mit Fastfetch und Lifetime-Anzeige
cat << 'EOF' > "$USER_HOME/.config/fish/config.fish"
# ════════════════════════════════════════════════
# 🐚 Fish Shell Config – by Dennis Hilk
# ════════════════════════════════════════════════

# Welcome Message
function fish_greeting
    set_color cyan
    echo "🐧 Welcome to DWM Ultimate v6.2 – by Dennis Hilk"
    set_color normal
    echo ""
    fastfetch --load-config none --logo-color cyan \
        --show-host --show-kernel --show-shell --show-terminal --show-uptime --show-cpu --show-gpu --show-memory --show-disk \
        --separator " → " \
        --structure "title os host kernel shell terminal cpu gpu memory disk uptime" \
        --color-title cyan --color-text white
    echo ""
    set_color yellow
    echo "🕓 System Lifetime:"
    set_color white
    if test -f /var/log/pacman.log
        set install_date (grep "installed filesystem" /var/log/pacman.log | head -n1 | awk '{print $1" "$2}')
        if test -n "$install_date"
            echo "🗓 Installed on: $install_date"
        else
            echo "📅 Installation date not found"
        end
    else
        echo "📅 No pacman log available"
    end
    set_color yellow
    echo "⏱ Uptime: "(uptime -p)
    set_color normal
end

# DWM Aliases
alias cdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias mdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias startdwm="startx"
alias fetch="fastfetch"
EOF
chown -R $SUDO_USER:$SUDO_USER "$USER_HOME/.config/fish"

# ────────────────────────────────────────────────
# ✅ Final Message
# ────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════════════════════╗"
echo "║ ✅ DWM Ultimate v6.2 (by Dennis Hilk) Ready! ║"
echo "╚══════════════════════════════════════════════╝"
echo ""
echo "🎨 Config path: ~/.config/dwm"
echo "💡 Start DWM with: startx"
echo "🧠 Default shell: Fish"
echo "🖥  Super key = Mod4 (works guaranteed)"
echo "⌨️  Super + Return → Alacritty"
echo "⚙️  GPU auto-detection enabled"
echo "💾 ZRAM active"
echo "📊 Fastfetch shows full system info + OS lifetime"
echo ""
