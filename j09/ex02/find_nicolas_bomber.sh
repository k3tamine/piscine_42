#!/bin/sh
cat $1 | grep "Nicolas.Bomber" | awk -F'\t' '{print $3}'
