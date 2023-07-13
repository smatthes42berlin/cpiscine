#!/bin/bash

if [[ $# -gt 0 ]] ; then
	norminette -R CheckForbiddenSourceHeader
fi

cc -Wall -Wextra -Werror -o user_exe main.c ft_putchar.c rush04.c && ./user_exe

