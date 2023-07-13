/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 08:01:34 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int b;
	int div;
	int mod;

	div = 0;
	mod = 0;

	a = 56;
	b = 5;	

	printf("a = %d , b = %d , div = %d, mod + %d mod\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d , b = %d , div = %d, mod + %d mod\n", a, b, div, mod);
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


