![License](https://img.shields.io/badge/License-MIT-blue)
![WindowManager](https://img.shields.io/badge/WM-DWM-blue)
![Terminal](https://img.shields.io/badge/Terminal-Alacritty-purple)

# 🐧 suckless Modular DWM Setup for Debian  
_Built with ❤️ by Dennis Hilk_

# DWM Setup Script (Debian-Based)

A simple, clean installer script to set up **DWM** (Dynamic Window Manager) and **slstatus** on Debian-based systems.  
This installer includes support for starting DWM without a display manager (`startx`), applies a minimal configuration, and adds useful tools like **Alacritty**, **zsh**, and **Powerlevel10k**.

---

## ✨ Features

- ✅ Builds and installs `dwm` and `slstatus` from source
- ✅ Configures `Mod4 + Return` to launch **Alacritty**
- ✅ Adds `startx` support via automatic `.xinitrc` setup
- ✅ Installs `zsh` and `Powerlevel10k`
- ✅ Supports copying a custom wallpaper on install (`wallpaper.png`)
- ✅ Installs essential tools: `rofi`, `dunst`, `thunar`, PipeWire audio stack, etc.

---

## 🛠️ Requirements

- A Debian-based system (e.g., Debian 13, Ubuntu, Linux Mint)
- Internet connection for package installation
- Basic build tools and Xorg dependencies will be installed automatically

---
🔗 Credits

This setup script includes concepts and code adapted from:
[justaguylinux/dwm-setup](https://codeberg.org/justaguylinux/dwm-setup)

The original work is licensed under the MIT License.

## 📦 Installation

1. **Clone or download this repository:**

   ```bash
   git clone https://github.com/dennishilk/dwm-debian.git
   cd dwm-debian
   chmod +x install.sh
   ./install.sh
   After installation, switch to a TTY and start DWM with: startx

  





