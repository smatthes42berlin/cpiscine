/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/19 08:48:55 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int b;

	a = 56;
	b = 5;	

	printf("a = %d , b = %d  \n", a, b);
	ft_ultimate_div_mod(&a, &b);	
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


