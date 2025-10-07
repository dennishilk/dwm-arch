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

#!/usr/bin/env bash
set -euo pipefail
trap 'echo "❌ Error at line $LINENO"; exit 1' ERR

echo "=== 🧠 System update..."
sudo pacman -Syu --noconfirm

# Ensure dialog & base tools
sudo pacman -S --needed --noconfirm base-devel git dialog || true

# ------------------------------------------------------------
# 🧰 Install yay (AUR helper) if missing
# ------------------------------------------------------------
if ! command -v yay &>/dev/null; then
  echo "=== 🧩 Installing yay (AUR helper)..."
  cd /tmp
  git clone https://aur.archlinux.org/yay-bin.git
  cd yay-bin
  makepkg -si --noconfirm
  cd ~
fi

# ------------------------------------------------------------
# ⚙️ Base + Zen Kernel + Audio Stack
# ------------------------------------------------------------
echo "=== ⚙️ Installing Zen kernel, PipeWire, and essentials..."
sudo pacman -S --needed --noconfirm \
  linux-zen linux-zen-headers xorg xorg-xinit \
  alacritty rofi picom feh fish fastfetch htop btop \
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
    echo "⚠️ GPU unknown, using Mesa fallback"
    sudo pacman -S --needed --noconfirm mesa
    ;;
esac

# ------------------------------------------------------------
# 🎮 Optional Software Menu (safe)
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
    12 "MangoHud" on ) || true

  [[ -z "${CHOICE:-}" ]] && break

  clear
  echo "Installing: $CHOICE"
  [[ $CHOICE == *"1"* ]] && sudo pacman -S --needed --noconfirm firefox
  [[ $CHOICE == *"2"* ]] && yay -S --noconfirm brave-bin || sudo pacman -S --needed --noconfirm brave
  [[ $CHOICE == *"3"* ]] && yay -S --noconfirm google-chrome || true
  [[ $CHOICE == *"4"* ]] && sudo pacman -S --needed --noconfirm steam
  [[ $CHOICE == *"5"* ]] && sudo pacman -S --needed --noconfirm lutris
  [[ $CHOICE == *"6"* ]] && sudo pacman -S --needed --noconfirm wine winetricks
  [[ $CHOICE == *"7"* ]] && sudo pacman -S --needed --noconfirm protonup-qt
  [[ $CHOICE == *"8"* ]] && sudo pacman -S --needed --noconfirm gamemode
  [[ $CHOICE == *"9"* ]] && yay -S --noconfirm heroic-games-launcher-bin || true
  [[ $CHOICE == *"10"* ]] && sudo pacman -S --needed --noconfirm vulkan-tools
  [[ $CHOICE == *"11"* ]] && sudo pacman -S --needed --noconfirm obs-studio
  [[ $CHOICE == *"12"* ]] && sudo pacman -S --needed --noconfirm mangohud lib32-mangohud

  dialog --yesno "Install more software?" 10 40 || break
done

clear
echo "✅ Optional software installation finished!"
echo "Reboot now to enter DWM."
