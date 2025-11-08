#!/bin/bash

set -e

# Command line options
ONLY_CONFIG=false
EXPORT_PACKAGES=false

# Parse arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        --only-config)
            ONLY_CONFIG=true
            shift
            ;;
        --export-packages)
            EXPORT_PACKAGES=true
            shift
            ;;
        --help)
            echo "Usage: $0 [OPTIONS]"
            echo "  --only-config       Only copy config files (no package install)"
            echo "  --export-packages   Show Debian package list and exit"
            echo "  --help              Show this help message"
            exit 0
            ;;
        *)
            echo "Unknown option: $1"
            exit 1
            ;;
    esac
done

# Paths
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CONFIG_DIR="$HOME/.config/suckless"
TEMP_DIR="/tmp/dwm_$$"
LOG_FILE="$HOME/dwm-install.log"

# Logging and cleanup
exec > >(tee -a "$LOG_FILE") 2>&1
trap "rm -rf $TEMP_DIR" EXIT

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
CYAN='\033[0;36m'
NC='\033[0m'

die() { echo -e "${RED}ERROR: $*${NC}" >&2; exit 1; }
msg() { echo -e "${CYAN}$*${NC}"; }

export_packages() {
    echo "
Required packages for DWM setup (Debian/Ubuntu):

sudo apt install xorg xorg-dev build-essential sxhkd xdotool dbus-x11 libnotify-bin \
rofi dunst feh lxappearance network-manager-gnome lxpolkit \
thunar thunar-archive-plugin thunar-volman gvfs-backends dialog mtools smbclient cifs-utils unzip \
pavucontrol pulsemixer pamixer pipewire-audio \
avahi-daemon acpi acpid xfce4-power-manager qimgv xdg-user-dirs-gtk fd-find \
alacritty fonts-recommended fonts-font-awesome fonts-terminus \
zsh git curl wget \
cmake meson ninja-build pkg-config
"
    exit 0
}

# Export package list and exit if requested
[ "$EXPORT_PACKAGES" = true ] && export_packages

# Banner
echo -e "${CYAN}--- DWM Setup (Debian-based) ---${NC}"
read -p "Proceed with installation? (y/n) " -n 1 -r
echo
[[ ! $REPLY =~ ^[Yy]$ ]] && exit 1

# Update system
if [ "$ONLY_CONFIG" = false ]; then
    msg "Updating system..."
    sudo apt-get update && sudo apt-get upgrade -y
fi

# Package groups
PACKAGES_CORE=(
    xorg xorg-dev build-essential sxhkd xdotool dbus-x11
    libnotify-bin libnotify-dev libusb-0.1-4
)

PACKAGES_UI=(
    rofi dunst feh lxappearance network-manager-gnome lxpolkit
)

PACKAGES_FILE_MANAGER=(
    thunar thunar-archive-plugin thunar-volman
    gvfs-backends dialog mtools smbclient cifs-utils unzip
)

PACKAGES_AUDIO=(
    pavucontrol pulsemixer pamixer pipewire-audio
)

PACKAGES_UTILITIES=(
    avahi-daemon acpi acpid xfce4-power-manager
    qimgv xdg-user-dirs-gtk fd-find
)

PACKAGES_TERMINAL=(
    alacritty
)

PACKAGES_SHELL=(
    zsh git curl wget
)

PACKAGES_FONTS=(
    fonts-recommended fonts-font-awesome fonts-terminus
)

PACKAGES_BUILD=(
    cmake meson ninja-build pkg-config
)

# Install packages
if [ "$ONLY_CONFIG" = false ]; then
    msg "Installing required packages..."
    sudo apt install -y \
        "${PACKAGES_CORE[@]}" \
        "${PACKAGES_UI[@]}" \
        "${PACKAGES_FILE_MANAGER[@]}" \
        "${PACKAGES_AUDIO[@]}" \
        "${PACKAGES_UTILITIES[@]}" \
        "${PACKAGES_TERMINAL[@]}" \
        "${PACKAGES_SHELL[@]}" \
        "${PACKAGES_FONTS[@]}" \
        "${PACKAGES_BUILD[@]}" || die "Package installation failed"
else
    msg "Skipping package installation (--only-config)"
fi

# Install Powerlevel10k for zsh
if [ "$ONLY_CONFIG" = false ]; then
    msg "Installing Powerlevel10k theme..."
    git clone --depth=1 https://github.com/romkatv/powerlevel10k.git "$HOME/.powerlevel10k"
    echo 'source ~/.powerlevel10k/powerlevel10k.zsh-theme' >> "$HOME/.zshrc"
    sudo chsh -s $(which zsh) "$USER" || msg "Could not set zsh as default shell. You can run 'chsh -s /bin/zsh' manually."
fi

# Handle existing config
if [ -d "$CONFIG_DIR" ]; then
    read -p "Found existing suckless config. Backup? (y/n) " -n 1 -r
    echo
    if [[ $REPLY =~ ^[Yy]$ ]]; then
        mv "$CONFIG_DIR" "${CONFIG_DIR}.bak.$(date +%s)"
        msg "Backup created"
    else
        read -p "Overwrite without backup? (y/n) " -n 1 -r
        echo
        [[ $REPLY =~ ^[Yy]$ ]] || die "Installation cancelled"
        rm -rf "$CONFIG_DIR"
    fi
fi

# Copy fresh configs
msg "Copying suckless configs..."
mkdir -p "$CONFIG_DIR"
cp -r "$SCRIPT_DIR/suckless/"* "$CONFIG_DIR/" || die "Failed to copy configs"

# Wallpaper support
WALLPAPER_SOURCE="$SCRIPT_DIR/wallpaper.png"
WALLPAPER_DEST="$CONFIG_DIR/wallpaper"
if [ -f "$WALLPAPER_SOURCE" ]; then
    msg "Found wallpaper.png, copying to $WALLPAPER_DEST..."
    mkdir -p "$WALLPAPER_DEST"
    cp "$WALLPAPER_SOURCE" "$WALLPAPER_DEST/wallpaper.png"
else
    msg "No wallpaper.png found next to install.sh, skipping wallpaper copy."
fi

# Patch config.h for Alacritty
msg "Configuring Mod4+Return to launch Alacritty..."
sed -i 's|{ MODKEY, XK_Return.*|{ MODKEY,           XK_Return, spawn,          SHCMD("alacritty") },|' "$CONFIG_DIR/dwm/config.h"

# Build DWM and slstatus
msg "Building suckless tools (dwm, slstatus)..."
for tool in dwm slstatus; do
    cd "$CONFIG_DIR/$tool" || die "Missing $tool directory"
    make && sudo make install || die "Build failed for $tool"
done

# Xinit setup for non-DM start
if [ "$ONLY_CONFIG" = false ]; then
    msg "Configuring ~/.xinitrc for startx..."
    if ! grep -q "exec dwm" "$HOME/.xinitrc" 2>/dev/null; then
        echo "# Launch DWM" >> "$HOME/.xinitrc"
        echo "exec dwm" >> "$HOME/.xinitrc"
    fi
fi

# Finish
msg "Installation complete!"
echo -e "\nYou can now run ${GREEN}startx${NC} in any TTY to start DWM."
echo "Press MOD+Return to open Alacritty."
echo "ZSH + Powerlevel10k is installed. Restart your shell to configure it."
