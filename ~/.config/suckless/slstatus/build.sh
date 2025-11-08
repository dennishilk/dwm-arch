#!/usr/bin/env bash
set -e

echo "📊 Building slstatus..."
cd "$(dirname "$0")"
rm -rf slstatus
git clone https://git.suckless.org/slstatus
cp config.h slstatus
cd slstatus
sudo make clean install
echo "✅ slstatus installed successfully."
