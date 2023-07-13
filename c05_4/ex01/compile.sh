#!/bin/bash

if [[ $# -gt 0 ]] ; then
	norminette -R CheckForbiddenSourceHeader
fi


cc -Wall -Wextra -Werror -o check main.c && ./check | cat -te
