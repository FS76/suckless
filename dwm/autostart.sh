#!/bin/bash

variety &
picom &
dunst &
volumeicon &
nm-applet &
xrdb -merge ~/.Xresources &
/usr/lib/mate-polkit/polkit-mate-authentication-agent-1 &
#nitrogen --restore &
xwallpaper --zoom  ~/Afbeeldingen/wallpapers/0003.jpg
setxkbmap -layout be-latin1 &
dwmbar2 &
