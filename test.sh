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
  curl wget unzip

# ────────────────────────────────────────────────
# 🧠 Detect GPU and install drivers
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
# 💾 Enable ZRAM for memory compression
# ────────────────────────────────────────────────
echo "=== 💾 Enabling ZRAM..."
cat << 'EOF' > /etc/systemd/zram-generator.conf
[zram0]
zram-size = ram / 2
compression-algorithm = zstd
EOF

systemctl enable --now systemd-zram-setup@zram0.service || true

# ────────────────────────────────────────────────
# 🧱 Create DWM config folder
# ────────────────────────────────────────────────
echo "=== 🏗️ Creating config structure..."
mkdir -p /home/$SUDO_USER/.config/dwm
cd /home/$SUDO_USER/.config/dwm
chown -R $SUDO_USER:$SUDO_USER /home/$SUDO_USER/.config/dwm

# ────────────────────────────────────────────────
# 🧩 Clone and build suckless tools
# ────────────────────────────────────────────────
echo "=== 🧱 Cloning DWM, ST and DMENU..."
sudo -u $SUDO_USER git clone https://git.suckless.org/dwm
sudo -u $SUDO_USER git clone https://git.suckless.org/st
sudo -u $SUDO_USER git clone https://git.suckless.org/dmenu

echo "=== ⚙️ Building and installing..."
cd /home/$SUDO_USER/.config/dwm/dwm
sudo -u $SUDO_USER sed -i 's/Mod1Mask/Mod4Mask/g' config.h || true
make clean install

cd /home/$SUDO_USER/.config/dwm/st && make clean install
cd /home/$SUDO_USER/.config/dwm/dmenu && make clean install

# ────────────────────────────────────────────────
# 🧠 Autostart
# ────────────────────────────────────────────────
echo "=== 🧠 Creating autostart.sh..."
cat << 'EOF' > /home/$SUDO_USER/.config/dwm/autostart.sh
#!/bin/bash
# ────────────────────────────────────────────────
# Autostart script for DWM Ultimate v6
# ────────────────────────────────────────────────

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

# Applets
# blueman-applet &

# Statusbar (optional)
# slstatus &
EOF
chmod +x /home/$SUDO_USER/.config/dwm/autostart.sh
chown $SUDO_USER:$SUDO_USER /home/$SUDO_USER/.config/dwm/autostart.sh

# ────────────────────────────────────────────────
# 🧠 XINITRC for startx
# ────────────────────────────────────────────────
echo "=== 🧩 Writing ~/.xinitrc ..."
cat << 'EOF' > /home/$SUDO_USER/.xinitrc
#!/bin/sh
~/.config/dwm/autostart.sh &
exec dwm
EOF
chmod +x /home/$SUDO_USER/.xinitrc
chown $SUDO_USER:$SUDO_USER /home/$SUDO_USER/.xinitrc

# ────────────────────────────────────────────────
# 🐚 Fish shell as default
# ────────────────────────────────────────────────
echo "=== 🐚 Setting Fish as default shell..."
chsh -s /usr/bin/fish $SUDO_USER

# ────────────────────────────────────────────────
# 🧠 Fish aliases
# ────────────────────────────────────────────────
mkdir -p /home/$SUDO_USER/.config/fish
cat << 'EOF' >> /home/$SUDO_USER/.config/fish/config.fish

# ── DWM aliases
alias cdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias mdwm="cd ~/.config/dwm/dwm && sudo make clean install && cd -"
alias startdwm="startx"
EOF
chown -R $SUDO_USER:$SUDO_USER /home/$SUDO_USER/.config/fish

# ────────────────────────────────────────────────
# ✅ Final info
# ────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════════════════╗"
echo "║ ✅ DWM Ultimate v6 Installation Complete ║"
echo "╚══════════════════════════════════════════╝"
echo ""
echo "🎨 Config path: ~/.config/dwm"
echo "💡 Start with: startx"
echo "🧠 Default shell: Fish"
echo "⚙️  GPU driver installed automatically"
echo "💾 ZRAM enabled for performance"
echo ""
