/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/29 17:35:49 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_range.c"
//# include <string.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int min = -2;
	int max = 2;
	int diff = max - min;

	int *check = ft_range(min, max);
	int i = -1;
	while (++i < diff)
	{
		printf("%d\n", check[i]);
	}
	printf("%p\n", ft_range(1, -2));
//	char	*src = "copy this";
//	char	*dest;
//	
//	dest = ft_strdup(src);
//	
//	printf("dest = %s", src);
//	printf("\n%ld\n", sizeof(char));
//	
//
//	return (0);
}


