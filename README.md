![License](https://img.shields.io/badge/License-MIT-blue)
![WindowManager](https://img.shields.io/badge/WM-DWM-blue)
![Terminal](https://img.shields.io/badge/Terminal-Alacritty-purple)
![Kernel](https://img.shields.io/badge/Kernel-Arch%20Stock%20%7C%20Zen-brightgreen)
![GPU](https://img.shields.io/badge/GPU-NVIDIA%20%7C%20AMD-orange)

# 🐧 suckless-dotfiles — Modular DWM Setup for Arch Linux  
_Built with ❤️ by Dennis Hilk_

A clean, portable, and modular **[dwm](https://dwm.suckless.org/)** setup, designed to live inside  
`~/.config/suckless/` and deployable on any Arch installation via a single script.

This setup includes **vanilla, unpatched DWM** (for maximum control), plus essential tools like  
`slstatus`, `sxhkd`, `picom`, and `dunst`, all neatly organized and customizable.

---

## ✨ Highlights

- 🧱 **Vanilla DWM 6.4** build (no pre-applied patches — pure freedom)
- 🎨 **Gruvbox-Dark Theme** enabled by default (`config.h`)
- ⚡ Lightweight setup optimized for speed and clarity
- 💻 Includes configs & scripts for:
  - `dwm` (using `build.sh`)
  - `slstatus` (status bar with CPU, RAM, Volume, Time)
  - `sxhkd` (keybindings: Super+Return, Super+D, Super+B, etc.)
  - `picom` (opacity, shadows, animations)
  - `dunst` (minimal notifications)
  - `xinitrc` (autostart services when using `startx`)
- 🔍 **Auto-GPU detection** (NVIDIA / AMD), installs drivers as needed
- 🎮 Optional: Install Steam, Wine, and Zen Kernel
- 🧊 Includes ZRAM setup for better memory handling
- ✨ Built for **`~/.config/suckless/`** so the whole setup is Git-trackable

---
💡 During install you'll be asked if you want:

Steam + Wine

Google Chrome (AUR)

Zen Kernel

Pacman beauty tweaks (Color / ILoveCandy)

Once installed:

✅ Select DWM from LightDM, or

✅ Start manually: startx

Enjoy your lightning-fast setup 🐧

This repo ships with vanilla DWM.
If you want patches like vanitygaps, cyclelayouts, or attachbottom, simply drop .diff files into:

~/.config/suckless/dwm/patches/

Then rebuild via:

cd ~/.config/suckless/dwm
./build.sh


---

## 🚀 Installation (Arch Linux)

1. **Clone the repo directly into `~/.config/suckless`:**

```bash
git clone https://github.com/dennishilk/dwm-arch.git
cd dwm-arch/~/.config/suckless
chmod +x install.sh
./install.sh
use lightdm or startx



