#!/usr/bin/env bash
set -e

echo "🐧 Arch DWM Minimal Installer - by Dennis Hilk"

CONFIG_DIR="$(pwd)/config"
ASSETS_DIR="$(pwd)/assets"

# --- GPU DRIVER DETECTION ---

if lspci | grep -E "NVIDIA"; then
    echo "🟢 NVIDIA GPU found – installing drivers"
    sudo pacman -Syu --noconfirm nvidia nvidia-utils libva-nvidia-driver
elif lspci | grep -E "AMD"; then
    echo "🔴 AMD GPU found – installing drivers"
    sudo pacman -Syu --noconfirm xf86-video-amdgpu vulkan-radeon
else
    echo "⚪ No dedicated GPU detected, skipping driver setup"
fi

# --- OPTIONAL PACKAGES ---
read -rp "Install Steam + Wine (y/n): " steam
if [[ $steam == "y" ]]; then
    sudo pacman -Syu --noconfirm steam wine mangohud gamemode
fi

read -rp "Install Chrome Browser (y/n): " chrome
if [[ $chrome == "y" ]]; then
    sudo pacman -Syu --noconfirm google-chrome
fi

read -rp "Use Zen Kernel instead of stock (y/n): " zen
if [[ $zen == "y" ]]; then
    sudo pacman -Syu --noconfirm linux-zen linux-zen-headers
else
    sudo pacman -Syu --noconfirm linux linux-headers
fi

# --- SYSTEM & DESKTOP APPLICATIONS ---

echo "🧰 Installing core tools and dependencies..."
sudo pacman -Syu --noconfirm base-devel xorg-server xorg-xinit git feh picom zsh \
        ttf-jetbrains-mono-nerd slstatus zram-generator htop alacritty \
        rofi dunst thunar pavucontrol sxhkd

# --- BUILD VANILLA DWM ---

echo "📥 Cloning and building vanilla DWM..."
rm -rf /tmp/dwm
git clone https://git.suckless.org/dwm /tmp/dwm
cp config.h /tmp/dwm/.
cd /tmp/dwm && sudo make clean install

# --- USER CONFIG FILES ---

echo "🗂️  Installing user configs..."
mkdir -p ~/.config/{sxhkd,dunst,picom} ~/.wallpapers

cp "$CONFIG_DIR/sxhkd/sxhkdrc" ~/.config/sxhkd/
cp "$CONFIG_DIR/dunst/dunstrc" ~/.config/dunst/
cp "$CONFIG_DIR/picom.conf" ~/.config/picom/
cp "$CONFIG_DIR/xinitrc" ~/.xinitrc
cp "$ASSETS_DIR/wallpaper.png" ~/.wallpapers/ 2>/dev/null || true

# --- ENABLE ZRAM ---

echo "💾 Enabling zram (compressed RAM)..."
echo -e "[zram0]\nzram-size = ram/2" | sudo tee /etc/systemd/zram-generator.conf

echo
echo "✅ Installation complete! Log in and run 'startx' after reboot to launch DWM."
