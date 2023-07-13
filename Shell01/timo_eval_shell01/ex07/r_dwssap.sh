#!/bin/sh

FT_LINE1=7
FT_LINE2=15

FT_DIFF=$((FT_LINE2 - FT_LINE1 + 1))

cat /etc/passwd |
	grep -v '#' |
	sed '1d' |
	awk 'NR % 2 == 1' |
	rev |
	sort -r |
	rev |
	cut -d':' -f1 |
	rev |
	head -"${FT_LINE2}" |
	tail -"${FT_DIFF}" |
	tr '\n' ':' |
	sed -e 's/:$/./g' -e 's/:/, /g'
