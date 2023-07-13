/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:55:12 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 10:42:00 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char *argv[])
{
	t_stock_str *arr_of_struct;

	arr_of_struct = ft_strs_to_tab(argc, argv);
	ft_show_tab(arr_of_struct);
	return (0);
}
