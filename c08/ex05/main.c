/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:55:12 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/04 17:15:44 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>


struct s_stock_str  *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par);

int	main()
{
	t_stock_str *arr_of_struct;
	
	char **argv = malloc(sizeof(*argv) * 10);

	int i = 0;

	while (i < 10)
	{
		argv[i] = malloc(sizeof(**argv) * 100);
		i++;
	}

	argv[0] = "bbb";
	argv[1] = "aaa";
	argv[2] = "aaa";
	argv[3] = "ccc";

	arr_of_struct = ft_strs_to_tab(4, argv);
	ft_show_tab(arr_of_struct);

	// printf("test str = $%s$\n", arr_of_struct[0].str);

	return (0);
}
