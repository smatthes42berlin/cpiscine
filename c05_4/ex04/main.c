/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 12:59:45 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_fibonacci.c"
# include <string.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int i = 0;
	while (i < 40)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
//	printf("%d\n", ft_fibonacci(50));
}

