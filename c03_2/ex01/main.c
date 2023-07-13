/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/22 15:50:28 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strncmp.c"
# include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *str1 = "ABC";
	char *str2 = "AB";

	int comp_1_2 = strncmp(str1, str2, 3);
	int comp_2_1 = strncmp(str2, str1, 3);
	int comp_1_1 = strncmp(str1, str1, 0);
	int ft_comp_1_2 = ft_strncmp(str1, str2, 3);
	int ft_comp_2_1 = ft_strncmp(str2, str1, 3);
	int ft_comp_1_1 = ft_strncmp(str1, str1, 0);

	printf("String 1 is = %s\n", str1);
	printf("String 2 is = %s\n", str2);
	printf("String 1 compared 2 is = %d\n", comp_1_2);
	printf("String 2 compared 1 is = %d\n", comp_2_1);
	printf("String 1 compared 1 is = %d\n", comp_1_1);
	printf("my_String 1 compared 2 is = %d\n", ft_comp_1_2);
	printf("my_String 2 compared 1 is = %d\n", ft_comp_2_1);
	printf("my_String 1 compared 1 is = %d\n", ft_comp_1_1);
	
}

