/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:41:44 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/26 23:26:03 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include/gen_util.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	put_error(int exit_code)
{
	write(1, "Error\n", 6);
	return (exit_code);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int **board, int n)
{
	int	x;
	int	y;

	x = 0;
	while (x < n)
	{
		y = 0;
		while (y < n)
		{
			ft_putchar(board[x][y] + '0');
			if (y != n - 1)
				ft_putchar(' ');
			++y;
		}
		ft_putchar('\n');
		++x;
	}
}
