#!/bin/bash
# Slackware DWM & Gaming – Installer mit Ryzen Optimierung
# Author: Dennis Hilk 

set -e

if [[ $EUID -ne 0 ]]; then
  echo "Bitte als root ausführen."
  exit 1
fi

USER_HOME="/home/$SUDO_USER"

echo "======================================================"
echo "    Slackware 15.0 – DWM Gaming Installer (Optimiert)"
echo "======================================================"

read -p "DWM + Basis installieren? [Y/n] " dwm
read -p "NVIDIA installiert werden? [Y/n] " nv
read -p "Steam + Vulkan installieren? [Y/n] " steam

if [[ $dwm =~ ^[Yy]$ ]]; then
  slackpkg install git gcc make libX11-devel libXft-devel libXinerama-devel
  cd /usr/local/src
  git clone https://git.suckless.org/dwm
  cd dwm && make clean install
  cd ..
  git clone https://git.suckless.org/dmenu && cd dmenu && make clean install
  cd ..
  git clone https://git.suckless.org/slstatus && cd slstatus && make clean install
fi

if [[ $nv =~ ^[Yy]$ ]]; then
  wget https://us.download.nvidia.com/XFree86/Linux-x86_64/535.XX/NVIDIA-Linux-x86_64-535.run
  chmod +x NVIDIA-Linux-x86_64-535.run
  ./NVIDIA-Linux-x86_64-535.run --silent
fi

if [[ $steam =~ ^[Yy]$ ]]; then
  slackpkg install glibc-solib64 glibc-compat32
  cd /usr/local/src
  git clone https://slackbuilds.org/slackbuilds.git
  cd slackbuilds/games/steam
  ./steam.SlackBuild
  installpkg /tmp/steam-*.txz
fi

# Autostart DWM
echo "sxhkd &" >> "$USER_HOME/.xinitrc"
echo "picom &" >> "$USER_HOME/.xinitrc"
echo "slstatus &" >> "$USER_HOME/.xinitrc"
echo "exec dwm" >> "$USER_HOME/.xinitrc"
chown "$SUDO_USER:$SUDO_USER" "$USER_HOME/.xinitrc"

# Optimization: ZRAM + CPU Performance
cat << 'EOF' > /etc/rc.d/rc.local
#!/bin/bash
modprobe zram
echo lzo-rle > /sys/block/zram0/comp_algorithm
echo $(( 8 * 1024 * 1024 * 1024 )) > /sys/block/zram0/disksize
mkswap /dev/zram0 && swapon /dev/zram0

for CPU in /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor; do
 echo performance > "$CPU"
done
EOF
chmod +x /etc/rc.d/rc.local

echo ">>> Installiere Fastfetch + Kitty..."
slackpkg install kitty fastfetch
mkdir -p "$USER_HOME/.config/kitty"
wget -qO "$USER_HOME/.config/kitty/kitty.conf" https://raw.githubusercontent.com/gruvbox-community/gruvbox-contrib/master/kitty/gruvbox-dark.conf
chown -R "$SUDO_USER:$SUDO_USER" "$USER_HOME/.config/kitty"

echo ">>> Setup abgeschlossen. Starte per 'startx'"
