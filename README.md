![License](https://img.shields.io/badge/License-MIT-blue)
![WindowManager](https://img.shields.io/badge/WM-DWM-blue)
![Kernel](https://img.shields.io/badge/Kernel-Zen%20(Liquorix)-brightgreen)
![GPU](https://img.shields.io/badge/GPU-NVIDIA%20%7C%20AMD-orange)
# 🧱 DWM by Dennis Hilk — Gruvbox Edition 
# Creates a full DWM environment i'm using arch btw

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

## 🛠️ Installation

Make sure you have a clean Arch Linux base system (e.g. via `archinstall`).  
Then:

```bash
git clone https://github.com/dennishilk/dwm-arch.git
cd dwm-arch
chmod +x install.sh
./install.sh


🎮 Optional Software Menu

During setup, a dialog menu lets you pick optional packages:

Browsers: Firefox, Brave, Google Chrome
Gaming / Tools: Steam, Lutris, Wine + Winetricks, ProtonUp-Qt, Gamemode, Heroic, Vulkan Tools, OBS Studio, MangoHud

You can run the menu again later by re-running ./install.sh.


📁 Directory Overview
~/dwm/
 ├─ install.sh           → Main installer
 ├─ wallpaper.png        → Your desktop background (optional)
 └─ README.md            → This file

~/.config/alacritty/     → Terminal colors & fonts (Gruvbox)
~/.config/rofi/          → App launcher theme
~/.config/picom/         → Blur & transparency settings
~/.config/fish/          → Fish shell + Fastfetch on start
~/.dwm/autostart.sh      → Startup apps for DWM session
~/.xinitrc               → Starts DWM (used by startx)


⚙️ Tech Summary
Component	Description
Kernel	Zen (desktop-optimized Arch kernel)
Audio	PipeWire + PulseAudio bridge + WirePlumber
GPU	Auto-detects & installs NVIDIA/AMD/Intel
Shell	Fish + Fastfetch
Theme	Gruvbox (Alacritty, Rofi, Picom)
WM	DWM (patched build)
Display Mgr	None — systemd autologin + startx
