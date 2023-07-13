/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 10:41:46 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_sqrt.c"
# include <string.h>
# include <limits.h>

int	ft_sqrt(int nb);
int	ft_sqrt_naive(int nb);

int	main(void)
{
	int i = INT_MAX - 1;
	while (i < INT_MAX)
	{
	//	printf("%d, %d, %d\n", i, ft_sqrt(i),  ft_sqrt_naive(i));
	printf("%d, %d\n", i, ft_sqrt(i));
		i++;
	}
	//printf("%d\n", ft_sqrt(10));
}

