cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | tail +$FT_LINE1 | head -$(( ( $FT_LINE2 + 1 ) - $FT_LINE1 )) | tr '\n' ' ' | tr '_ ' '_, ' | sed 's/,/, /g' | sed 's/, $/./' | tr -d "\n"
