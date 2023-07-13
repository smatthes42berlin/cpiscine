/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fried_arg_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:24:04 by fszendzi          #+#    #+#             */
/*   Updated: 2023/04/02 23:39:01 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "rush02.h"

long	handle_two_arguments(char **argv)
{
	long	num;

	if (ft_check_argument_is_num(argv[1]) == NULL)
		return (-1);
	else
	{
		num = ft_atoi(argv[1]);
		if (num > 4294967295)
			return (-1);
		else
			return (num);
	}
}

long	handle_three_arguments(char **argv)
{
	long	num;

	if (ft_check_dict_file(argv[1]) == NULL \
		|| ft_check_argument_is_num(argv[2]) == NULL)
		return (-1);
	else
	{
		num = ft_atoi(argv[2]);
		if (num > 4294967295)
			return (-1);
		else
			return (num);
	}
}

long	handling_arguments(int argc, char **argv)
{
	if (argc == 2)
	{
		return (handle_two_arguments(argv));
	}
	else if (argc == 3)
	{
		return (handle_three_arguments(argv));
	}
	else
	{
		return (-1);
	}
}
