#!/bin/sh
ldapsearch -Q "(sn=*bon*)" | grep -c '^sn:'
