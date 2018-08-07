#!/bin/bash
cat /etc/passwd | sed -e '/^#/ d' | sed -e 'N;s/^.*\n//' | cut -d : -f 1 | rev | sort -r | sed ''$FT_LINE1','$FT_LINE2'!d'| tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d '\n'
