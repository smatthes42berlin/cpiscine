/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/23 09:07:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strlcpy.c"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src10[] = "SssssssssS";
	char	dest5[] = "DdddD";
	unsigned int	res;
	
	printf("source = '%s'\n", src10);
	printf("dest before = '%s'\n", dest5);
	res = ft_strlcpy(dest5, src10, 3);
	printf("dest after = '%s'\n", dest5);
	printf("res = %d\n", res);
}
