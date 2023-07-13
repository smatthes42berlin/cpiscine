/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:05:45 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 13:11:12 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int	name_len;

	if (argc > 0)
	{
		name_len = ft_strlen(argv[0]);
		write(1, argv[0], name_len);
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
