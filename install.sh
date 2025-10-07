#!/usr/bin/env bash
# ============================================================
# 🧱 DWM by Dennis Hilk
# ============================================================
# Features:
# - Zen Kernel + PipeWire + Auto GPU
# - DWM + Dmenu + DWMBlocks (with glibc signal fix)
# - Fish + Fastfetch + Gruvbox Theme
# - Gaming & Browser menu
# - Auto-login, Auto-startx
# - All error-proof and single-run setup
# ============================================================

set -euo pipefail
trap 'echo "❌ Error at line $LINENO"; exit 1' ERR

PROJECT_DIR="$HOME/dwm"
WALLPAPER_SRC="$(dirname "$0")/wallpaper.png"
INSTALL_SCRIPT="$PROJECT_DIR/install.sh"

echo "=== 🧰 Preparing environment..."
mkdir -p "$PROJECT_DIR"
cd "$PROJECT_DIR"

# --- CREATE INSTALLER ---------------------------------------
cat > "$INSTALL_SCRIPT" <<'EOF'
#!/usr/bin/env bash
set -euo pipefail
trap 'echo "❌ Error at line $LINENO"; exit 1' ERR

echo "=== 🧠 System update..."
sudo pacman -Syu --noconfirm || { echo "❌ pacman failed"; exit 1; }

# ------------------------------------------------------------
# ⚙️ Base + Zen Kernel + Audio Stack
# ------------------------------------------------------------
echo "=== ⚙️ Installing Zen kernel, PipeWire, and essentials..."
sudo pacman -S --needed --noconfirm \
  linux-zen linux-zen-headers base-devel git xorg xorg-xinit \
  alacritty rofi picom feh fish fastfetch htop btop dialog \
  ttf-jetbrains-mono ttf-font-awesome ttf-nerd-fonts-symbols-mono \
  networkmanager network-manager-applet \
  pipewire pipewire-alsa pipewire-pulse pipewire-jack wireplumber pavucontrol

sudo systemctl enable NetworkManager.service

# ------------------------------------------------------------
# 🔍 GPU Auto-Detection
# ------------------------------------------------------------
echo "=== 🔍 Detecting GPU..."
GPU_VENDOR=$(lspci | grep -E "VGA|3D" | grep -Eo 'NVIDIA|AMD|Intel' | head -n1 || echo "Unknown")

case "$GPU_VENDOR" in
  NVIDIA)
    echo "→ NVIDIA GPU detected"
    sudo pacman -S --needed --noconfirm nvidia nvidia-utils nvidia-settings
    ;;
  AMD)
    echo "→ AMD GPU detected"
    sudo pacman -S --needed --noconfirm mesa xf86-video-amdgpu vulkan-radeon
    ;;
  Intel)
    echo "→ Intel GPU detected"
    sudo pacman -S --needed --noconfirm mesa xf86-video-intel vulkan-intel
    ;;
  *)
    echo "⚠️ GPU unknown, installing Mesa fallback"
    sudo pacman -S --needed --noconfirm mesa
    ;;
esac

# ------------------------------------------------------------
# 🧱 Build DWM safely with signal fix
# ------------------------------------------------------------
echo "=== 🧱 Building DWM, Dmenu, DWMBlocks..."
BUILD_DIR=~/builds
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

clone_and_build () {
  local REPO="$1"
  local NAME="$2"
  if [ ! -d "$NAME" ]; then
    git clone "$REPO" "$NAME"
  fi
  cd "$NAME"

  # Signal fix for glibc
  sed -i 's/-Wall/& -Wno-incompatible-pointer-types/' config.mk 2>/dev/null || true
  sed -i 's/-Wall/& -Wno-incompatible-pointer-types/' Makefile 2>/dev/null || true

  echo "→ Building $NAME..."
  sudo make clean install || { echo "⚠️ $NAME build failed"; exit 1; }
  cd ..
}

clone_and_build https://github.com/LukeSmithxyz/dwm.git dwm
clone_and_build https://github.com/LukeSmithxyz/dmenu.git dmenu
clone_and_build https://github.com/torrinfail/dwmblocks.git dwmblocks

# ------------------------------------------------------------
# 🎨 Gruvbox Setup
# ------------------------------------------------------------
echo "=== 🎨 Applying Gruvbox theme..."
mkdir -p ~/.config/{alacritty,rofi,picom,fish} ~/.dwm ~/Pictures

# Alacritty
cat > ~/.config/alacritty/alacritty.yml <<'YML'
import:
  - ~/.config/alacritty/gruvbox.yml
window:
  opacity: 0.95
  padding: {x:6, y:6}
font:
  normal:
    family: JetBrainsMono Nerd Font
    style: Regular
  size: 11
YML

cat > ~/.config/alacritty/gruvbox.yml <<'YML'
colors:
  primary: {background: '0x282828', foreground: '0xebdbb2'}
  normal:
    black: '0x282828'
    red: '0xcc241d'
    green: '0x98971a'
    yellow: '0xd79921'
    blue: '0x458588'
    magenta: '0xb16286'
    cyan: '0x689d6a'
    white: '0xa89984'
YML

# Rofi
cat > ~/.config/rofi/gruvbox.rasi <<'RASI'
* {
  font: "JetBrainsMono Nerd Font 11";
  background: #282828;
  foreground: #ebdbb2;
  selected: #458588;
  border-radius: 8px;
  padding: 5px;
}
window { width: 30%; }
RASI

# Picom
cat > ~/.config/picom/picom.conf <<'CONF'
backend = "glx";
vsync = true;
shadow = true;
corner-radius = 10;
blur-method = "dual_kawase";
blur-strength = 6;
fading = true;
fade-in-step = 0.03;
fade-out-step = 0.03;
opacity-rule = ["90:class_g = 'Alacritty'"];
CONF

# Fish
chsh -s /usr/bin/fish
echo "fastfetch" >> ~/.config/fish/config.fish

# Wallpaper
if [ -f "$(dirname "$0")/wallpaper.png" ]; then
  cp "$(dirname "$0")/wallpaper.png" ~/Pictures/wallpaper.png
fi

# ------------------------------------------------------------
# 🪟 Autostart + xinitrc
# ------------------------------------------------------------
cat > ~/.dwm/autostart.sh <<'SH'
#!/usr/bin/env bash
pipewire & wireplumber &
picom --experimental-backends &
nm-applet &
dwmblocks &
feh --bg-fill ~/Pictures/wallpaper.png &
SH
chmod +x ~/.dwm/autostart.sh

cat > ~/.xinitrc <<'SH'
#!/bin/sh
~/.dwm/autostart.sh &
exec dwm
SH
chmod +x ~/.xinitrc

# ------------------------------------------------------------
# 🔁 Auto-Login + startx
# ------------------------------------------------------------
echo "=== ⚙️ Configuring auto-login..."
sudo mkdir -p /etc/systemd/system/getty@tty1.service.d
sudo tee /etc/systemd/system/getty@tty1.service.d/override.conf >/dev/null <<EOF2
[Service]
ExecStart=
ExecStart=-/sbin/agetty --autologin $USER --noclear %I 38400 linux
EOF2

grep -q "startx" ~/.bash_profile 2>/dev/null || echo '[[ -z $DISPLAY && $(tty) == /dev/tty1 ]] && startx' >> ~/.bash_profile

# ------------------------------------------------------------
# 🎮 Optional Software Menu
# ------------------------------------------------------------
echo "=== 🎮 Optional software selection..."
while true; do
  CHOICE=$(dialog --clear --stdout --checklist "Select optional software:" 20 70 10 \
    1 "Firefox" on \
    2 "Brave Browser" off \
    3 "Google Chrome" off \
    4 "Steam" on \
    5 "Lutris" off \
    6 "Wine + Winetricks" off \
    7 "ProtonUp-Qt" off \
    8 "Gamemode" on \
    9 "Heroic Games Launcher" off \
    10 "Vulkan Tools" on \
    11 "OBS Studio" off \
    12 "MangoHud" on )

  clear
  echo "Installing: $CHOICE"
  [[ $CHOICE == *"1"* ]] && sudo pacman -S --needed --noconfirm firefox
  [[ $CHOICE == *"2"* ]] && sudo pacman -S --needed --noconfirm brave-bin || yay -S brave-bin --noconfirm || true
  [[ $CHOICE == *"3"* ]] && sudo pacman -S --needed --noconfirm google-chrome || yay -S google-chrome --noconfirm || true
  [[ $CHOICE == *"4"* ]] && sudo pacman -S --needed --noconfirm steam
  [[ $CHOICE == *"5"* ]] && sudo pacman -S --needed --noconfirm lutris
  [[ $CHOICE == *"6"* ]] && sudo pacman -S --needed --noconfirm wine winetricks
  [[ $CHOICE == *"7"* ]] && sudo pacman -S --needed --noconfirm protonup-qt
  [[ $CHOICE == *"8"* ]] && sudo pacman -S --needed --noconfirm gamemode
  [[ $CHOICE == *"9"* ]] && sudo pacman -S --needed --noconfirm heroic-games-launcher-bin || yay -S heroic-games-launcher-bin --noconfirm || true
  [[ $CHOICE == *"10"* ]] && sudo pacman -S --needed --noconfirm vulkan-tools
  [[ $CHOICE == *"11"* ]] && sudo pacman -S --needed --noconfirm obs-studio
  [[ $CHOICE == *"12"* ]] && sudo pacman -S --needed --noconfirm mangohud lib32-mangohud

  dialog --yesno "Install more software?" 10 40
  [ $? -ne 0 ] && break
done

clear
echo "✅ DWM installation complete!"
echo "Reboot now to enter your Zen Gruvbox environment."
EOF

chmod +x "$INSTALL_SCRIPT"

# ------------------------------------------------------------
# Wallpaper copy
# ------------------------------------------------------------
if [ -f "$WALLPAPER_SRC" ]; then
  cp "$WALLPAPER_SRC" "$PROJECT_DIR/wallpaper.png"
else
  echo "⚠️ wallpaper.png not found, skipping."
fi

echo "============================================================"
echo "✅ Project ready: $PROJECT_DIR"
echo "Run once:"
echo "  cd ~/dwm && ./install.sh"
echo "Then reboot — it will boot directly into DWM."
echo "============================================================"
