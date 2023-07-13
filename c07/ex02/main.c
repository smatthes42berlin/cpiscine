/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:17:31 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
//# include <string.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int min = -5;
	int max = 5;
	int diff = max - min;
	int	*range;

	int check = ft_ultimate_range(&range, min, max);
	printf("size of range = %d\n", check);
	int i = -1;
	while (++i < diff)
	{
		printf("%d\n", range[i]);
	}
	return (0);
}


