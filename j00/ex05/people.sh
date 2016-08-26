#!/bin/sh
ldapsearch -Q "(uid=z*)" cn | cut -d":" -f2 | sed '/Z/!d' | sort -r | sed 's/ //'
