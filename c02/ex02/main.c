/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 15:03:34 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	test[10][20] = {"123456", "sdfdsf", "dsgdsg1", "\ngfdsg"};
		
	int counter = 0;
	while(counter < 4)
	{		
		printf("Test 1:'%s' \n", test[counter]);
		printf("Res:'%d' \n", ft_str_is_alpha(test[counter]));
		printf("\n");
		counter++;
	}

}
