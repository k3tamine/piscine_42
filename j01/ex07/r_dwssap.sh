cat /etc/passwd | sed '/#/d' | rev | sort -r | sed '1d' | sed 'n;d' | sed -n "${FT_LINE1}, ${FT_LINE2}p" | awk -F: '{print $NF}' | sed 's/_/_, /' | tr -d '\n' | sed 's/\(.*\), /\1./' | tr -d '\n'
