/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:58:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/26 19:49:33 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/handle_input.h"
#include "include/gen_util.h"

// handle sum of opposite inputs
int	handle_input(int argc, char **argv, int *borders, int n)
{
	if (!check_inp_valid(argc, argv, n))
		return (0);
	atoi_arr(argv, borders, n);
	if (!check_opposite_sum(borders, n))
		return (0);
	return (1);
}

int	check_inp_valid(int argc, char **argv, int n)
{
	int		allowed_char_num;
	int		i;
	char	*inp;

	if (argc != 2)
		return (0);
	inp = argv[1];
	allowed_char_num = n * n * 2 - 1;
	if (str_len(inp) != allowed_char_num)
		return (0);
	i = 0;
	while (i < allowed_char_num)
	{
		if (i % 2 != 0 && inp[i] != ' ')
		{
			return (0);
		}
		if (i % 2 == 0 && (inp[i] < '1' || inp[i] > '4'))
			return (0);
		i++;
	}
	return (1);
}

void	atoi_arr(char **argv, int *borders, int n)
{
	int	i;

	i = 0;
	while (i < n * n * 2 -1)
	{
		borders[i / 2] = argv[1][i] - '0';
		i = i + 2;
	}
}

int	check_opposite_sum(int *borders, int n)
{
	int	i;
	int	val;
	int	opp_val;

	i = 0;
	while (i < 3 * n)
	{
		val = borders[1];
		opp_val = borders[i + n];
		if ((val + opp_val) > (n + 1))
		{
			return (0);
		}
		++i;
		if (i == n)
			i = 2 * n;
	}
	return (1);
}
