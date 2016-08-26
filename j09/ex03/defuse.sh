#!/bin/sh
timestamp_atime=$(stat -t "%s" bomb.txt | cut -d " " -f9 | tr -d '"')
timestamp_atime=$((timestamp_atime - 1)) 
echo $timestamp_atime
