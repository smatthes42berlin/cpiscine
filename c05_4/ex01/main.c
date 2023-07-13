/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/29 10:11:01 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_recursive_factorial.c"
# include <string.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d = %d\n", i, ft_recursive_factorial(i));
		i++;
	}
}

