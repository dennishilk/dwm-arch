#!/usr/bin/env bash
# ============================================================
# 🧱 DWM by Dennis Hilk — Gruvbox Edition 
# ============================================================
# Creates a full DWM environment i'm using arch btw
# ============================================================

set -e

# --- CONFIG --------------------------------------------------
PROJECT_DIR="$HOME/dwm"
WALLPAPER_SRC="$(dirname "$0")/wallpaper.png"
INSTALL_SCRIPT="$PROJECT_DIR/install.sh"

echo "=== 🧰 Creating DWM by Dennis Hilk setup..."
mkdir -p "$PROJECT_DIR"
cd "$PROJECT_DIR"

# --- README --------------------------------------------------
cat > "$PROJECT_DIR/README.md" <<'EOF'
# 🧱 DWM by Dennis Hilk

A clean, minimal and Gruvbox-themed **Dynamic Window Manager** setup for Arch Linux.  
This setup keeps the raw speed and simplicity of **dwm**, while adding a modern look — including Rofi, Picom blur, and Alacritty styling.

---

## ✨ Features

- 🧩 Patched **dwm**, **dmenu**, and **dwmblocks**
- 🎨 Beautiful **Gruvbox theme** (Rofi + Alacritty + Picom)
- 🪟 Transparent windows & blur effects
- 🐟 **Fish shell** with Neofetch autostart
- ⚡ Lightweight setup (< 500 MB RAM idle)
- 🖼️ Custom wallpaper (`wallpaper.png` in the same folder)
- 🎛️ Auto-start script for picom, nm-applet & dwmblocks

---

## 🛠️ Installation

Make sure you already have a working **Arch Linux** base system with internet access.

```bash
git clone https://github.com/dennishilk/dwm-arch.git
cd dwm-arch
chmod +x install.sh
./install.sh
