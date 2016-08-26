cat /etc/passwd | sed '/#/d' | rev | sort -r | sed -n '2,${n;d}' | sed -n "${FT_LINE1}, ${FT_LINE2}p"
