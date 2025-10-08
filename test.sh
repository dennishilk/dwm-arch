#!/usr/bin/env bash
# ════════════════════════════════════════════════
# 🐧 Arch Linux DWM Ultimate v6 (by Dennis Hilk)
# https://github.com/dennishilk
# ════════════════════════════════════════════════

set -e

echo "=== 🧩 Updating Arch system..."
pacman -Syu --noconfirm

echo "=== ⚙️ Installing essential packages..."
pacman -S --needed --noconfirm \
  git base-devel xorg xorg-xinit xorg-xrandr \
  alacritty feh picom fish rofi xwallpaper network-manager-applet \
  pipewire pipewire-alsa pipewire-pulse wireplumber \
  curl wget unzip xorg-xmodmap

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
USER_HOME="/home/$SUDO_USER"
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
# ⚙️ Build with Super key + Alacritty
# ────────────────────────────────────────────────
echo "=== 🧠 Patching DWM for Super key and Alacritty..."
cd "$USER_HOME/.config/dwm/dwm"

# Falls config.h noch nicht existiert
sudo -u $SUDO_USER cp -n config.def.h config.h

# Alt → Super
sudo -u $SUDO_USER sed -i 's/Mod1Mask/Mod4Mask/g' config.h

# Standard-Terminal auf Alacritty setzen
sudo -u $SUDO_USER sed -i 's|"st"|"alacritty"|g' config.h

# Keybinding sicherstellen (Super+Return)
if ! grep -q 'alacritty' config.h; then
  echo 'static const char *termcmd[]  = { "alacritty", NULL };' >> config.h
  sed -i '/return,/d' config.h
  echo '{ MODKEY, XK_Return, spawn, {.v = termcmd } },' >> config.h
fi

echo "=== 🔨 Building and installing DWM..."
make clean install

# ST + DMENU
cd "$USER_HOME/.config/dwm/st" && make clean install
cd "$USER_HOME/.config/dwm/dmenu" && make clean install

# ────────────────────────────────────────────────
# 🧠 Autostart Script
# ────────────────────────────────────────────────
echo "=== 🧠 Creating autostart.sh..."
cat << 'EOF' > "$USER_HOME/.config/dwm/autostart.sh"
#!/bin/bash
# ────────────────────────────────────────────────
# Autostart script for DWM Ultimate v6
# ────────────────────────────────────────────────

# Fix Super key mapping (in case Mod4 not set)
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

# Statusbar (optional)
# slstatus &
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
# 🐚 Fish setup
# ────────────────────────────────────────────────
echo "=== 🐚 Setting Fish as default shell..."
chsh -s /usr/bin/fish $SUDO_USER

mkdir -p "$USER_HOME/.config/fish"
cat << 'EOF' >> "$USER_HOME/.config/fish/config.fish"

# ── DWM Aliases ────────────────────────────────
alias cdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias mdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias startdwm="startx"
EOF
chown -R $SUDO_USER:$SUDO_USER "$USER_HOME/.config/fish"

# ────────────────────────────────────────────────
# ✅ Final message
# ────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════════════════╗"
echo "║ ✅ DWM Ultimate v6 (by Dennis Hilk) Done ║"
echo "╚══════════════════════════════════════════╝"
echo ""
echo "🎨 Config path: ~/.config/dwm"
echo "💡 Start with: startx"
echo "🧠 Default shell: Fish"
echo "🖥  Super key fully mapped to Mod4"
echo "⌨️  Super + Return = Alacritty"
echo "💾 ZRAM active, GPU drivers auto-installed"
echo ""
