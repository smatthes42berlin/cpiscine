/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 16:25:13 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	test[10][20] = {"123\n456", "UUUUU", "UUUlUUU", "\ngfdsg"};
		
	int counter = 0;
	while(counter < 4)
	{		
		int res =  ft_str_is_printable(test[counter]);
		printf("Test 1:'%s' \n", test[counter]);
		printf("Res:'%d' \n", res);
		printf("\n");
		counter++;
	}
}
