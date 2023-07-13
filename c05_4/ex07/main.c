/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 11:46:16 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_find_next_prime.c"
# include <string.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	int i = -20;
	while (i < 20)
	{
	printf("%d, %d\n", i, ft_find_next_prime(i));
		i++;
	}
}

