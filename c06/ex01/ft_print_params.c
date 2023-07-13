/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:05:45 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 13:14:35 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int	name_len;
	int	i;

	i = 0;
	while (++i < argc)
	{	
		name_len = ft_strlen(argv[i]);
		write(1, argv[i], name_len);
		write(1, "\n", 1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}
