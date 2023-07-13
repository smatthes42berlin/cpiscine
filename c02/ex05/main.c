/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 16:19:32 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_str_is_uppercase.c"

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	test[10][20] = {"123456", "UUUUU", "UUUlUUU", "\ngfdsg"};
		
	int counter = 0;
	while(counter < 4)
	{		
		int res =  ft_str_is_uppercase(test[counter]);
		printf("Test 1:'%s' \n", test[counter]);
		printf("Res:'%d' \n", res);
		printf("\n");
		counter++;
	}
}
