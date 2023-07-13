/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:05:43 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 23:35:38 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

int	main(int argc, char **argv)
{
	long			arg_num;
	char			result[1000];
	char			***key_val_arr;

	result[0] = '\0';
	arg_num = handle_args(argc, argv);
	if (arg_num < 0)
		return (1);
	key_val_arr = allo_mem();
	if (!handle_dict(&key_val_arr, argc, argv))
		return (1);
	conv_num(arg_num, result, key_val_arr);
	rem_last_ws(result);
	ft_putstring(result);
	free_mem(key_val_arr, 3);
	return (0);
}

int	handle_dict(char ****key_val_arr, int argc, char *argv[])
{
	if (argc == 2)
	{
		*key_val_arr = read_dict("numbers.dict", *key_val_arr);
	}
	else
	{
		*key_val_arr = read_dict(argv[1], *key_val_arr);
	}
	if (*key_val_arr == NULL)
	{
		ft_putstring("Dict Error");
		return (0);
	}
	return (1);
}

long	handle_args(int argc, char *argv[])
{
	long	arg_num;	

	arg_num = handling_arguments(argc, argv);
	if (arg_num < 0)
	{
		ft_putstring("Error");
		return (-1);
	}
	return (arg_num);
}

void	rem_last_ws(char *result)
{
	int	i;

	i = 0;
	while (result[i] != 0)
	{
		i++;
	}
	if (i > 1)
		result[i - 1] = '\0';
}
