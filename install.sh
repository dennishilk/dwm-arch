#!/usr/bin/env bash
set -e

echo "🐧 DWM-Arch Installer - by Dennis Hilk"
CONFIG_DIR="$(pwd)/config"
ASSETS_DIR="$(pwd)/assets"

# --- BUILD DEPENDENCIES ---
echo "🔧 Installing required build dependencies..."
sudo pacman -Syu --noconfirm base-devel libx11 libxft libxinerama git curl

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
    sudo pacman -Syu --noconfirm steam wine gamemode mangohud
fi

read -rp "Install Google Chrome (AUR)? (y/n): " chrome
if [[ $chrome == "y" ]]; then
  if ! command -v yay &> /dev/null; then
    echo "📦 yay not found. Installing yay (AUR helper)..."
    sudo pacman -S --needed --noconfirm git base-devel
    git clone https://aur.archlinux.org/yay-bin.git /tmp/yay
    cd /tmp/yay && makepkg -si --noconfirm
    cd -
  fi
  echo "🌐 Installing Google Chrome..."
  yay -S --noconfirm google-chrome
fi

read -rp "Use Zen Kernel instead of stock (y/n): " zen
if [[ $zen == "y" ]]; then
    sudo pacman -Syu --noconfirm linux-zen linux-zen-headers
else
    sudo pacman -Syu --noconfirm linux linux-headers
fi

# --- PACMAN TWEAKS ---
read -rp "Enable ILoveCandy in pacman? (y/n): " candy
if [[ $candy == "y" ]]; then
  echo "🍬 Adding ILoveCandy..."
  echo "ILoveCandy" | sudo tee -a /etc/pacman.conf > /dev/null
fi

read -rp "Enable colorful pacman output? (y/n): " color
if [[ $color == "y" ]]; then
  echo "🌈 Enabling Color..."
  sudo sed -i 's/^#Color/Color/' /etc/pacman.conf
fi

# --- CORE APPLICATIONS ---
echo "🧰 Installing core tools..."
sudo pacman -Syu --noconfirm xorg-server xorg-xinit feh picom zsh sxhkd alacritty \
    rofi dunst thunar pavucontrol zram-generator htop

# --- BUILD DWM ---
echo "📥 Building dwm from source..."
rm -rf /tmp/dwm-6.4
curl -LO https://dl.suckless.org/dwm/dwm-6.4.tar.gz
tar -xzf dwm-6.4.tar.gz -C /tmp
cp config.h /tmp/dwm-6.4/
cd /tmp/dwm-6.4 && sudo make clean install && cd -

# --- BUILD SLSTATUS ---
echo "📊 Building slstatus from source..."
rm -rf /tmp/slstatus
git clone https://git.suckless.org/slstatus /tmp/slstatus
cp "$CONFIG_DIR/slstatus/config.h" /tmp/slstatus/
cd /tmp/slstatus && sudo make clean install && cd -

# --- USER CONFIG FILES ---
echo "🗂️ Copying user configs..."
mkdir -p ~/.config/{sxhkd,dunst,picom} ~/.wallpapers

cp "$CONFIG_DIR/sxhkd/sxhkdrc" ~/.config/sxhkd/
cp "$CONFIG_DIR/dunst/dunstrc" ~/.config/dunst/
cp "$CONFIG_DIR/picom.conf" ~/.config/picom/
cp "$CONFIG_DIR/xinitrc" ~/.xinitrc
cp "$ASSETS_DIR/wallpaper.png" ~/.wallpapers/ 2>/dev/null || true

# --- ENABLE ZRAM ---
echo "💾 Enabling zram..."
echo -e "[zram0]\nzram-size = ram/2" | sudo tee /etc/systemd/zram-generator.conf

echo
echo "✅ Installation complete! Log out, select 'DWM' in LightDM, and enjoy!"
