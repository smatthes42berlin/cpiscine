/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/29 12:36:54 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strdup.c"
# include <string.h>

char	*ft_strdup(char *str);

int	main(void)
{
	char	*src = "copy this";
	char	*dest;
	
	dest = ft_strdup(src);
	
	printf("dest = %s", src);
	printf("\n%ld\n", sizeof(char));
	

	return (0);
}


