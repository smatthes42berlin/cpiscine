/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:53:45 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
//# include <string.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("here");
		return (1);
	}

	char **res_1 = ft_split(argv[1], argv[2]);
	int i = 0;
	while (res_1[i] != NULL)
	{
		printf("string: %s\n", res_1[i]);
		i++;
	}
	printf("string: %s\n", res_1[i]);
	return (0);
}
