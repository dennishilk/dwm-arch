# ============================================================
# 🧱 DWM by Dennis Hilk — Gruvbox Edition 
# ============================================================
# Creates a full DWM environment i'm using arch btw
# ============================================================

## ✨ Features

- ⚡ **Zen Kernel** (optimized for desktop performance)
- 🧩 **Patched DWM**, **Dmenu**, and **DWMBlocks**
- 🔍 **Automatic GPU detection**
  - Installs the correct drivers for **NVIDIA**, **AMD**, or **Intel**
- 🔊 **PipeWire + WirePlumber + PulseAudio bridge**
- 🐟 **Fish shell** + **Fastfetch** on terminal startup
- 🎨 **Gruvbox theme**, **Rofi**, **Picom blur**, **Feh wallpaper**
- 🎮 **Interactive menu** to install browsers & gaming tools
- 🚀 **Auto login and auto startx** – boots straight to DWM

---

## 🛠️ Installation

Make sure you have a clean Arch Linux base system installed (e.g. via `archinstall`).

Then run:

git clone https://github.com/dennishilk/dwm-arch.git
cd dwm-arch
chmod +x install.sh
./install.sh

🎮 Optional Software Menu

During setup, you’ll be prompted with a menu (via dialog) to choose optional tools:
Each package can be toggled on/off before installation.


📁 Directory Overview
~/dwm/
 ├── install.sh          → Main installer
 ├── wallpaper.png       → Your desktop background
 ├── README.md           → This documentation

~/.config/alacritty/     → Terminal colors & fonts
~/.config/rofi/          → App launcher (Gruvbox)
~/.config/picom/         → Blur & transparency
~/.config/fish/          → Shell + Fastfetch
~/.dwm/autostart.sh      → Startup apps
~/.xinitrc               → DWM session start

⚙️ Tech Summary

Kernel	Zen (optimized Arch kernel)
Audio	PipeWire + PulseAudio bridge
GPU	Auto-detects and installs NVIDIA/AMD/Intel drivers
Shell	Fish with Fastfetch
Theme	Gruvbox (Alacritty, Rofi, Picom)
Window Manager	DWM (patched build)
Display Manager	None — direct autologin with systemd + startx
