/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/22 15:31:17 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strcmp.c"
# include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1 = "ABC";
	char *str2 = "AB";

	int comp_1_2 = strcmp(str1, str2);
	int comp_2_1 = strcmp(str2, str1);
	int comp_1_1 = strcmp(str1, str1);
	int ft_comp_1_2 = ft_strcmp(str1, str2);
	int ft_comp_2_1 = ft_strcmp(str2, str1);
	int ft_comp_1_1 = ft_strcmp(str1, str1);

	printf("String 1 is = %s\n", str1);
	printf("String 2 is = %s\n", str2);
	printf("String 1 compared 2 is = %d\n", comp_1_2);
	printf("String 2 compared 1 is = %d\n", comp_2_1);
	printf("String 1 compared 1 is = %d\n", comp_1_1);
	printf("my_String 1 compared 2 is = %d\n", ft_comp_1_2);
	printf("my_String 2 compared 1 is = %d\n", ft_comp_2_1);
	printf("my_String 1 compared 1 is = %d\n", ft_comp_1_1);
	
}

