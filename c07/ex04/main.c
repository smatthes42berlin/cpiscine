/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:41:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
//# include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main()
{
	char *base1 = "0123456789";
	char *base2 = "01";
	char *base3 = "0123456789ABCDEF";
//	char *base4 = "poneyvif";
//	char *base5 = "s";
//	char *err_base1 = "p";
//	char *err_base2 = "";
//	char *err_base3 = "00123456";
//	char *err_base4 = "+00123456";
//	char *err_base5 = "-00123456";
//
//	int num1 = 12356789;
//	int num2 = -12356789;
//	int num3 = 0;
//	int num4 = INT_MIN;
//	int num5 = INT_MAX;
	//	 "-2147483648";
	// "2147483647";
	char *int_min = "  -++--2147483648";
	char *int_max = "2147483647";
//	char *num = "214777766";
//	char *num2 = "214777";
	char *t_1 = "+-11010001010101100101";
	char *t_2 = "69ABF67";

	char *newBase;

	newBase = ft_convert_base(int_min, base1, base3);
	printf("num before=%s\n", int_min);	
	printf("num after=%s\n", newBase);
	newBase = ft_convert_base(int_max, base1, base2);
	printf("num before=%s\n", int_max);	
	printf("num after=%s\n", newBase);
	newBase = ft_convert_base(" --++0000", base1, base3);
	printf("num before=%s\n", " --++0000");	
	printf("num after=%s\n", newBase);
	newBase = ft_convert_base(t_1, base2, base1);
	printf("num before=%s\n", " -+11010001010101100101");	
	printf("num after=%s\n", newBase);
	newBase = ft_convert_base(t_2, base3, base1);
	printf("num before=%s\n", " --69ABF67");	
	printf("num after=%s\n", newBase);
	return (0);
}
