/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 10:18:15 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_iterative_power.c"
# include <string.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int i = 0;
	int res = 0;
	while (i < 10)
	{
		res = ft_iterative_power(2, i);
		printf("%d\n", res);
		res = ft_iterative_power(-2, i);
		printf("%d\n", res);
		i++;
	}
	printf("12,0 check %d\n",ft_iterative_power(12,0));
	printf("0,-1 check %d\n",ft_iterative_power(0,-1));
}

