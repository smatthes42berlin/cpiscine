/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 08:23:17 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_recursive_power.c"
# include <string.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", ft_recursive_power(2, i));
		printf("%d\n", ft_recursive_power(-2, i));
		i++;
	}
	printf("0,0 check = %d\n", ft_recursive_power(0,0));
	printf("0,1 check = %d\n", ft_recursive_power(0,1));
	printf("2,-1 check = %d\n", ft_recursive_power(2,-1));
}

