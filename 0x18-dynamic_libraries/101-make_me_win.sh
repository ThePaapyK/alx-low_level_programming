#!/bin/bash
wget -P /tmp https://github.com/ThePaapyK/alx-low_level_programming/raw/main/0x18-dynamic_libraries/crackit.so
export LD_PRELOAD=/tmp/crackit.so
