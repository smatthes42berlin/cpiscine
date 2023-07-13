/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/16 13:47:17 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include "ft_putnbr.c"
# include <stdio.h>
# include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	//printf("%i\n", INT_MAX);
	//printf("%i\n", INT_MIN);
	//printf("%ld\n", LONG_MAX);
	//printf("%ld\n", LONG_MIN);
	ft_putnbr(1234);
	printf("\n");
	ft_putnbr(-1234);
	printf("\n");
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
}
