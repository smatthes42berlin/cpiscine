/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/21 07:15:59 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strupcase.c"

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test[10][20] = {"az", "`'{", "lllllUUll"};
		
	int counter = 0;
	while(counter < 4)
	{		
		
		printf("Test 1:'%s' \n", test[counter]);
		char	*res =  ft_strupcase(test[counter]);
		printf("Res:'%s' \n", res);
		printf("\n");
		counter++;
	}
}
