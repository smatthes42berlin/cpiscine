/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 07:40:32 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "ft_putnbr_base.c"

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char *base1 = "0123456789";
	char *base2 = "01";
	char *base3 = "0123456789ABCDEF";
	char *base4 = "poneyvif";
	char *base5 = "s";
//	char *err_base1 = "p";
//	char *err_base2 = "";
//	char *err_base3 = "00123456";
//	char *err_base4 = "+00123456";
//	char *err_base5 = "-00123456";
//
//	int num1 = 12356789;
//	int num2 = -12356789;
//	int num3 = 0;
	int num4 = INT_MIN;
	int num5 = INT_MAX;

	// printf("num = %d \n", num1);
	ft_putnbr_base(num4, base1);
	printf("\n");
	ft_putnbr_base(num4, base2);
	printf("\n");
	ft_putnbr_base(num4, base3);
	printf("\n");
	ft_putnbr_base(num4, base4);
	printf("\nHeres base 5");
	ft_putnbr_base(num4, base5);
	printf("\n");
	
	ft_putnbr_base(num5, base1);
	printf("\n");
	ft_putnbr_base(num5, base2);
	printf("\n");
	ft_putnbr_base(num5, base3);
	printf("\n");
	ft_putnbr_base(num5, base4);
	printf("\n");
	ft_putnbr_base(num5, base5);
	printf("\n");

}
