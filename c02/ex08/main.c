/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/21 07:23:06 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strlowcase.c"

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test[10][20] = {"AZ", "@[", "UUUUUUllll"};
		
	int counter = 0;
	while(counter < 3)
	{		
		
		printf("Test 1:'%s' \n", test[counter]);
		char	*res =  ft_strlowcase(test[counter]);
		printf("Res:'%s' \n", res);
		printf("\n");
		counter++;
	}
}
