#!/bin/bash
#
# DWM Setup Script (Debian-Based)
# Includes adapted parts from justaguylinux/dwm-setup – MIT License
# Author: Dennis Hilk (https://github.com/dennishilk)
# Modified and redistributed under MIT License terms

set -e

# Command line options
ONLY_CONFIG=false
EXPORT_PACKAGES=false

while [[ $# -gt 0 ]]; do
    case $1 in
        --only-config) ONLY_CONFIG=true; shift ;;
        --export-packages) EXPORT_PACKAGES=true; shift ;;
        --help)
            echo "Usage: $0 [--only-config] [--export-packages]"
            exit 0 ;;
        *) echo "Unknown option: $1"; exit 1 ;;
    esac
done

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CONFIG_DIR="$HOME/.config/suckless"
POLYBAR_DIR="$HOME/.config/polybar"
LOG_FILE="$HOME/dwm-install.log"

exec > >(tee -a "$LOG_FILE") 2>&1

RED='\033[0;31m'; GREEN='\033[0;32m'; CYAN='\033[0;36m'; NC='\033[0m'
die() { echo -e "${RED}ERROR: $*${NC}" >&2; exit 1; }
msg() { echo -e "${CYAN}$*${NC}"; }

[ "$EXPORT_PACKAGES" = true ] && {
    echo "Required packages: sudo apt install xorg xorg-dev build-essential sxhkd xdotool dbus-x11 libnotify-bin rofi dunst feh lxappearance network-manager-gnome lxpolkit thunar thunar-archive-plugin thunar-volman gvfs-backends dialog mtools smbclient cifs-utils unzip pavucontrol pulsemixer pamixer pipewire-audio avahi-daemon acpi acpid xfce4-power-manager qimgv xdg-user-dirs-gtk fd-find polybar alacritty fonts-recommended fonts-font-awesome fonts-terminus zsh git curl wget cmake meson ninja-build pkg-config"
    exit 0
}

[[ "$ONLY_CONFIG" = false ]] && {
    msg "Installing packages..."
    sudo apt update && sudo apt install -y \
    xorg xorg-dev build-essential sxhkd xdotool dbus-x11 libnotify-bin \
    rofi dunst feh lxappearance network-manager-gnome lxpolkit thunar thunar-archive-plugin thunar-volman \
    gvfs-backends dialog mtools smbclient cifs-utils unzip pavucontrol pulsemixer pamixer pipewire-audio \
    avahi-daemon acpi acpid xfce4-power-manager qimgv xdg-user-dirs-gtk fd-find \
    polybar alacritty fonts-recommended fonts-font-awesome fonts-terminus \
    zsh git curl wget cmake meson ninja-build pkg-config
}

msg "Copying DWM config..."
[ -d "$CONFIG_DIR" ] && mv "$CONFIG_DIR" "$CONFIG_DIR.bak.$(date +%s)"
mkdir -p "$CONFIG_DIR" && cp -r "$SCRIPT_DIR/suckless/dwm" "$CONFIG_DIR"

msg "Applying wallpaper..."
if [ -f "$SCRIPT_DIR/wallpaper.png" ]; then
    mkdir -p "$CONFIG_DIR/wallpaper"
    cp "$SCRIPT_DIR/wallpaper.png" "$CONFIG_DIR/wallpaper/wallpaper.png"
    msg "Wallpaper copied!"
else
    msg "No wallpaper.png found – skipping"
fi

msg "Building DWM..."
cd "$CONFIG_DIR/dwm" && sudo make clean install || die "DWM build failed"

msg "Setting up Polybar..."
mkdir -p "$POLYBAR_DIR"
cp "$SCRIPT_DIR/polybar/config.ini" "$POLYBAR_DIR/config.ini"
cp "$SCRIPT_DIR/polybar/launch.sh" "$POLYBAR_DIR/launch.sh"
chmod +x "$POLYBAR_DIR/launch.sh"

msg "Adding autostart scripts..."
chmod +x "$CONFIG_DIR/dwm/scripts/autostart.sh"

msg "Installing Powerlevel10k..."
git clone --depth=1 https://github.com/romkatv/powerlevel10k.git "$HOME/.powerlevel10k"
echo 'source ~/.powerlevel10k/powerlevel10k.zsh-theme' >> "$HOME/.zshrc"
sudo chsh -s $(which zsh) "$USER"

msg "Setting up startx..."
grep -q "exec dwm" "$HOME/.xinitrc" || echo "exec dwm" >> "$HOME/.xinitrc"

msg "All done! Run 'startx' to try DWM."
