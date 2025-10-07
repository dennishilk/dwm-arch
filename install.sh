#!/usr/bin/env bash
# ============================================================
# 🧱 DWM by Dennis Hilk — Timeshift + Btrfs
# ============================================================

set -euo pipefail
trap 'echo "❌ Error at line $LINENO"; exit 1' ERR

# Absolute path fix
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WALLPAPER_SRC="$SCRIPT_DIR/wallpaper.png"

CONFIG_DIR="$HOME/.config/dwm"
BIN_DIR="$HOME/.local/bin"
INSTALL_SCRIPT="$CONFIG_DIR/install.sh"

mkdir -p "$CONFIG_DIR" "$BIN_DIR"
echo "=== 🧰 Creating DWM setup in $CONFIG_DIR ..."

# ------------------------------------------------------------
# INSTALL SCRIPT
# ------------------------------------------------------------
cat > "$INSTALL_SCRIPT" <<'EOF'
#!/usr/bin/env bash
set -euo pipefail
trap 'echo "❌ Error at line $LINENO"; exit 1' ERR

echo "=== 🧠 Updating system..."
sudo pacman -Syu --noconfirm

# ------------------------------------------------------------
# ⚙️ Base + Zen Kernel + PipeWire
# ------------------------------------------------------------
echo "=== ⚙️ Installing Zen kernel, PipeWire, and essentials..."
sudo pacman -S --needed --noconfirm \
  linux-zen linux-zen-headers base-devel git xorg xorg-xinit \
  alacritty rofi picom feh fish fastfetch htop btop \
  ttf-jetbrains-mono ttf-font-awesome ttf-nerd-fonts-symbols-mono \
  networkmanager network-manager-applet \
  pipewire pipewire-alsa pipewire-pulse pipewire-jack wireplumber pavucontrol

sudo systemctl enable NetworkManager.service

# ------------------------------------------------------------
# 🧩 Timeshift + GRUB-Btrfs (if Btrfs detected)
# ------------------------------------------------------------
FSTYPE=$(findmnt -n -o FSTYPE / || echo "unknown")
if [[ "$FSTYPE" == "btrfs" ]]; then
  echo "=== 🧩 Btrfs detected — enabling Timeshift and GRUB-Btrfs..."
  sudo pacman -S --needed --noconfirm timeshift timeshift-autosnap grub-btrfs
  sudo systemctl enable grub-btrfs.path || true

  echo "→ Timeshift will create automatic snapshots before system upgrades."
  echo "→ Snapshots will appear in your GRUB menu under 'Arch Linux Snapshots'."
else
  echo "⚠️ Root filesystem is not Btrfs — skipping Timeshift integration."
fi

# ------------------------------------------------------------
# 🔍 GPU Auto-Detection
# ------------------------------------------------------------
echo "=== 🔍 Detecting GPU..."
GPU_VENDOR=$(lspci | grep -E "VGA|3D" | grep -Eo 'NVIDIA|AMD|Intel' | head -n1 || echo "Unknown")

case "$GPU_VENDOR" in
  NVIDIA)
    echo "→ NVIDIA GPU detected"
    sudo pacman -S --needed --noconfirm nvidia nvidia-utils nvidia-settings ;;
  AMD)
    echo "→ AMD GPU detected"
    sudo pacman -S --needed --noconfirm mesa xf86-video-amdgpu vulkan-radeon ;;
  Intel)
    echo "→ Intel GPU detected"
    sudo pacman -S --needed --noconfirm mesa xf86-video-intel vulkan-intel ;;
  *)
    echo "⚠️ Unknown GPU — installing Mesa fallback"
    sudo pacman -S --needed --noconfirm mesa ;;
esac

# ------------------------------------------------------------
# 🧱 Build DWM, Dmenu, DWMBlocks in ~/.config/dwm
# ------------------------------------------------------------
CONFIG_DIR="$HOME/.config/dwm"
BIN_DIR="$HOME/.local/bin"
mkdir -p "$CONFIG_DIR/src" "$BIN_DIR"

echo "=== 🧱 Building user-local DWM stack..."

build_local() {
  local REPO="$1"; local NAME="$2"
  local DEST="$CONFIG_DIR/src/$NAME"
  if [ ! -d "$DEST" ]; then
    git clone "$REPO" "$DEST"
  fi
  cd "$DEST"
  sed -i 's/-Wall/& -Wno-incompatible-pointer-types/' config.mk 2>/dev/null || true
  sed -i 's/-Wall/& -Wno-incompatible-pointer-types/' Makefile 2>/dev/null || true
  [ -f config.h ] && sed -i 's/"st"/"alacritty"/' config.h || true
  make clean
  make
  cp "$DEST/$NAME" "$BIN_DIR/$NAME"
  chmod +x "$BIN_DIR/$NAME"
}

build_local https://github.com/LukeSmithxyz/dwm.git dwm
build_local https://github.com/LukeSmithxyz/dmenu.git dmenu
build_local https://github.com/torrinfail/dwmblocks.git dwmblocks

grep -q ".local/bin" ~/.bash_profile 2>/dev/null || \
  echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bash_profile

# ------------------------------------------------------------
# 🎨 Gruvbox Config + Autostart
# ------------------------------------------------------------
mkdir -p ~/.config/{alacritty,rofi,picom,fish}
mkdir -p "$CONFIG_DIR"

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

# Fish + Fastfetch
chsh -s /usr/bin/fish
echo "fastfetch" >> ~/.config/fish/config.fish

# Autostart
cat > "$CONFIG_DIR/autostart.sh" <<'SH'
#!/usr/bin/env bash
pipewire & wireplumber &
picom --experimental-backends &
nm-applet &
dwmblocks &
sleep 1 && feh --bg-fill ~/.config/dwm/wallpaper.png &
SH
chmod +x "$CONFIG_DIR/autostart.sh"

# xinitrc
cat > ~/.xinitrc <<'SH'
#!/bin/sh
~/.config/dwm/autostart.sh &
exec ~/.local/bin/dwm
SH
chmod +x ~/.xinitrc

# ------------------------------------------------------------
# 🔁 Autologin + startx
# ------------------------------------------------------------
echo "=== ⚙️ Configuring auto-login..."
sudo mkdir -p /etc/systemd/system/getty@tty1.service.d
sudo tee /etc/systemd/system/getty@tty1.service.d/override.conf >/dev/null <<EOF2
[Service]
ExecStart=
ExecStart=-/sbin/agetty --autologin $USER --noclear %I 38400 linux
EOF2

grep -q "startx" ~/.bash_profile 2>/dev/null || \
echo '[[ -z $DISPLAY && $(tty) == /dev/tty1 ]] && startx' >> ~/.bash_profile

clear
echo "============================================================"
echo "✅ Installation complete!"
echo "Reboot to enter your user-local DWM Gruvbox Zen environment."
echo "============================================================"
EOF

chmod +x "$INSTALL_SCRIPT"

# ------------------------------------------------------------
# Copy wallpaper
# ------------------------------------------------------------
if [ -f "$WALLPAPER_SRC" ]; then
  echo "🖼️ Copying wallpaper from: $WALLPAPER_SRC"
  cp "$WALLPAPER_SRC" "$CONFIG_DIR/wallpaper.png"
else
  echo "⚠️ wallpaper.png not found in $SCRIPT_DIR"
fi

echo "============================================================"
echo "✅ Ready! Run:"
echo "  ~/.config/dwm/install.sh"
echo "Then reboot — system will boot directly into DWM with Timeshift snapshots."
echo "============================================================"
