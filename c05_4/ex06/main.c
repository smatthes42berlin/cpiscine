/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 11:26:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_is_prime.c"
# include <string.h>
# include <limits.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int i = -20;
	while (i < 20)
	{
	printf("%d, %d\n", i, ft_is_prime(i));
		i++;
	}
	printf("%d, %d\n", INT_MAX, ft_is_prime(INT_MAX));
}

