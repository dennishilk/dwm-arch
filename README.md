IN WORK <->




![License](https://img.shields.io/badge/License-MIT-blue)
![WindowManager](https://img.shields.io/badge/WM-DWM-blue)
![Kernel](https://img.shields.io/badge/Kernel-Zen%20(Liquorix)-brightgreen)
![GPU](https://img.shields.io/badge/GPU-NVIDIA%20%7C%20AMD-orange)

# 🐧 arch-dwm — Minimal DWM Setup for Arch Linux 
   written By Dennis Hilk

A clean, modular, and unpatched vanilla **[dwm](https://dwm.suckless.org/)** build for Arch Linux users who love minimalism, speed, and easy customization.

This version comes without pre-applied patches (pure upstream code) — ideal for users who want to start simple and grow their window manager setup over time.

---

## ✨ Features

- 🖥️ **Vanilla dwm** (no patches, no bloat — fully yours to extend)
- 🎨 **Gruvbox-Dark theme** (configurable in `config.h`)
- 💻 **Alacritty terminal**, **Rofi launcher**, and **Google Chrome** keybindings
- 🔌 **Auto-detected GPU drivers** (NVIDIA / AMD)
- 🔧 Includes config files for:
  - `sxhkd` (keybindings)
  - `slstatus` (lightweight status bar)
  - `picom` (compositor w/ rounded corners & opacity rules)
  - `dunst` (notification daemon)
  - `startx` autostart via `xinitrc`
- 🚀 Optional install of **Steam**, **Wine**, and **Zen Kernel**
- 📦 Easy install via `install.sh`
- Once installed, reboot and run: startx

---

## ⚡ Installation (Arch Linux)

Clone the repo and run the installer:

```bash
git clone https://github.com/dennishilk/dwm-arch.git
cd dwm-arch
chmod +x install.sh
./install.sh




Once installed, reboot and run:

startx
