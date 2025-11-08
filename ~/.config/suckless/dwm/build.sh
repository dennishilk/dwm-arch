#!/usr/bin/env bash
set -e

echo "🧱 Building DWM..."
cd "$(dirname "$0")"
rm -rf dwm-6.4
curl -LO https://dl.suckless.org/dwm/dwm-6.4.tar.gz
tar -xzf dwm-6.4.tar.gz
cp config.h dwm-6.4
cd dwm-6.4
sudo make clean install
echo "✅ DWM installed successfully."
