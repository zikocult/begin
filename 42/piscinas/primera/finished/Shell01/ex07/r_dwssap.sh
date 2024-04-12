cat /etc/passwd | sed -e '/^#/d' | rev | awk -F ":" '{ print $NF}' | sort -r | sed '1d; n; d' | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed 's/.$/\./g'
