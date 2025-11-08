#!/bin/sh

slstatus &

# polkit
lxpolkit &

# background
feh --bg-scale ~/.config/suckless/wallpaper/wallpaper.png &
# Polybar
"$HOME/.config/polybar/launch.sh" &
# sxhkd
# (re)load sxhkd for keybinds
if hash sxhkd >/dev/null 2>&1; then
	pkill sxhkd
	sleep 0.5
	sxhkd -c "$HOME/.config/suckless/sxhkd/sxhkdrc" &
fi

dunst -config ~/.config/suckless/dunst/dunstrc &
picom --config ~/.config/suckless/picom/picom.conf --animations -b &
