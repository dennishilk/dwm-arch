#!/bin/bash
# Gentoo  DWM, NVIDIA, Steam, Picom, Fastfetch, Kitty, Ryzen Optimized
# Author: Dennis Hilk 

set -e

if [[ $EUID -ne 0 ]]; then
  echo "Bitte als root oder via sudo ausführen."
  exit 1
fi

USER_HOME="/home/$SUDO_USER"

echo ">>> [1/8] Setze Ryzen 5800X3D Optimierungen..."
echo 'CFLAGS="-march=znver3 -O2 -pipe"' >> /etc/portage/make.conf
echo 'USE="X alsa pulseaudio opengl vulkan -systemd"' >> /etc/portage/make.conf

echo ">>> [2/8] Sync & Update Portage..."
emerge --sync

echo ">>> [3/8] Installiere Basis Pakete (DWM, Tools, Gaming)..."
emerge --ask x11-base/xorg-server x11-drivers/nvidia-drivers \
x11-misc/dmenu x11-wm/dwm x11-misc/slstatus x11-misc/picom \
x11-misc/sxhkd x11-terms/kitty sys-apps/fastfetch games-util/steam-meta

echo ">>> [4/8] KDE, Gnome, Wayland explizit verhindern..."
echo "USE=\"-wayland -gnome -kde\"" >> /etc/portage/make.conf

echo ">>> [5/8] Ryzen Governor und P-State aktivieren..."
echo "GRUB_CMDLINE_LINUX_DEFAULT=\"amd_pstate=active\"" >> /etc/default/grub
grub-mkconfig -o /boot/grub/grub.cfg

# Create rc.local for ZRAM + Governor
cat << 'EOF' > /etc/local.d/optimization.start
#!/bin/bash
modprobe zram
echo lzo-rle > /sys/block/zram0/comp_algorithm
echo $(( 8 * 1024 * 1024 * 1024 )) > /sys/block/zram0/disksize
mkswap /dev/zram0
swapon /dev/zram0
for CPU in /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor; do
 echo performance > "$CPU"
done
EOF
chmod +x /etc/local.d/optimization.start
rc-config add local default

echo ">>> [6/8] Gruvbox Kitty Theme + Config einrichten..."
mkdir -p "$USER_HOME/.config/kitty"
wget -qO "$USER_HOME/.config/kitty/kitty.conf" https://raw.githubusercontent.com/gruvbox-community/gruvbox-contrib/master/kitty/gruvbox-dark.conf
chown -R "$SUDO_USER:$SUDO_USER" "$USER_HOME/.config"

echo ">>> [7/8] .xinitrc für DWM einrichten..."
echo "sxhkd &" >> "$USER_HOME/.xinitrc"
echo "picom &" >> "$USER_HOME/.xinitrc"
echo "slstatus &" >> "$USER_HOME/.xinitrc"
echo "exec dwm" >> "$USER_HOME/.xinitrc"
chown "$SUDO_USER:$SUDO_USER" "$USER_HOME/.xinitrc"

echo ">>> [8/8] Fastfetch ausprobieren mit: fastfetch"
echo ">>> FERTIG! Starte DWM mit 'startx'"
