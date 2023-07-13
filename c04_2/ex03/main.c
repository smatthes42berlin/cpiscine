/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 18:08:41 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "ft_atoi.c"
int	ft_atoi(char *str);

int	main(void)
{
	char *test = "1234";
	char *test2 = "   ---+--+1234ab567";
	printf("number is = %d\n", ft_atoi(test));
	printf("number is = %d\n", ft_atoi(test2));
	printf("number is = %d\n", ft_atoi("-2147483648"));
}
