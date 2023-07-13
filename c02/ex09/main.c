/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/21 07:56:50 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strcapitalize.c"

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	test[10][200] = {"zalut, 5omZAn5 tu vas ? 42mots quarante-deux; cinquante+et+un", "@[", "UUUUUUllll"};
		
	int counter = 0;
	while(counter < 3)
	{		
		
		printf("Test 1:'%s' \n", test[counter]);
		char	*res =  ft_strcapitalize(test[counter]);
		printf("Res:'%s' \n", res);
		printf("\n");
		counter++;
	}
}
