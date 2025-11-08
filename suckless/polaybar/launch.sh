#!/bin/bash

# Terminate already running bar instances
killall -q polybar

# Wait until processes have been shut down
while pgrep -x polybar >/dev/null; do sleep 1; done

# Launch bar
polybar main &
