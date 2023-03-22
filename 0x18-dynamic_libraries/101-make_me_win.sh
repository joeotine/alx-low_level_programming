#!/bin/bash
wget -P /tmp/ https://raw.github.com/joeotine/alx-low_level_programming/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD=/path/to/100-operations.so
