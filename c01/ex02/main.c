/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/19 08:20:33 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_swap.c"

void	ft_swap(int *a, int*b);

int	main(void)
{
	int	a;
	int b;

	a = 11;
	b = 99;	

	printf("a = %d , b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("a = %d , b = %d \n", a, b);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(0);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(1);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(2);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(9);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(10);
//	printf("\n");
//	printf("\n");
}


