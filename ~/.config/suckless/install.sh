#!/usr/bin/env bash
set -e

echo "🐧 Installing Suckless DWM Setup from ~/.config/suckless/"
BASE="$HOME/.config/suckless"

# --- INSTALL BASE PACKAGES ---
echo "📦 Installing dependencies..."
sudo pacman -Syu --noconfirm base-devel xorg-server xorg-xinit \
    libx11 libxft libxinerama curl git feh picom dunst zram-generator \
    htop rofi sxhkd alacritty thunar pavucontrol

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
read -rp "Install Steam + Wine? (y/n): " steam
if [[ $steam == "y" ]]; then
    sudo pacman -Syu --noconfirm steam wine gamemode mangohud
fi

read -rp "Install Google Chrome from AUR? (y/n): " chrome
if [[ $chrome == "y" ]]; then
  if ! command -v yay &> /dev/null; then
    echo "📦 yay not found. Installing yay (AUR helper)..."
    git clone https://aur.archlinux.org/yay-bin.git /tmp/yay
    cd /tmp/yay && makepkg -si --noconfirm
    cd -
  fi
  yay -S --noconfirm google-chrome
fi

read -rp "Use Zen kernel instead of stock? (y/n): " zen
if [[ $zen == "y" ]]; then
    sudo pacman -Syu --noconfirm linux-zen linux-zen-headers
else
    sudo pacman -Syu --noconfirm linux linux-headers
fi

# --- PACMAN TWEAKS ---
read -rp "Enable ILoveCandy in pacman output? (y/n): " candy
if [[ $candy == "y" ]]; then
  sudo sed -i '/# Misc options/a ILoveCandy' /etc/pacman.conf
  echo "🍬 ILoveCandy enabled!"
fi

read -rp "Enable colorful pacman output? (y/n): " color
if [[ $color == "y" ]]; then
  sudo sed -i 's/^#Color/Color/' /etc/pacman.conf
  echo "🌈 Color output enabled!"
fi

# --- BUILD DWM ---
echo "🧱 Building DWM..."
bash "$BASE/dwm/build.sh"

# --- BUILD SLSTATUS ---
echo "📊 Building slstatus..."
bash "$BASE/slstatus/build.sh"

# --- CONFIG FILES ---
echo "🗂️ Copying configs..."
mkdir -p ~/.config/{sxhkd,picom,dunst} ~/.wallpapers
cp "$BASE/sxhkd/sxhkdrc" ~/.config/sxhkd/
cp "$BASE/picom/picom.conf" ~/.config/picom/
cp "$BASE/dunst/dunstrc" ~/.config/dunst/
cp "$BASE/xinitrc" ~/.xinitrc
cp "$BASE/wallpaper.png" ~/.wallpapers/ || echo "⚠️ No wallpaper.png found – skipping"

# --- ENABLE ZRAM ---
echo "💾 Setting up zram..."
echo -e "[zram0]\nzram-size = ram/2" | sudo tee /etc/systemd/zram-generator.conf

# --- LIGHTDM SESSION ---
echo "🌓 Creating LightDM session..."
sudo tee /usr/share/xsessions/dwm.desktop >/dev/null <<EOF
[Desktop Entry]
Encoding=UTF-8
Name=DWM
Comment=Dynamic Window Manager
Exec=/usr/local/bin/dwm
Icon=dwm
Type=XSession
EOF

echo "✅ All done! Log out, select 'DWM' in LightDM, or run 'startx'"
