/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:27:45 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	if (argc >= 5)
	{
		int size = atoi(argv[1]);
		char *sep = argv[2];
		char *res = ft_strjoin(size, (argv + 3), sep);
		printf("%s\n", res);
	}
	char *restest = ft_strjoin(0, argv, "-");
	free(restest);
	return (0);
}
