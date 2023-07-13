/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 12:21:29 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strlcat.c"
# include <string.h>
# include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int		ft_strlen(char *str);
unsigned int		rm_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char my_dest_1[10] = "AAAA";
	// char my_dest_2[4] = "AAAA";	
	// char my_dest_2[11] = "AAAAAAAAAA";
	// char my_dest_3[11] = "AAAAAAAAAA";
	
	char src[11] = "2222222222";
	
	int my_1 = ft_strlcat(my_dest_1, src, 6);
	// int src_2 = strlcat(my_dest_2, src, 6);
	printf("Return Value my = %d\n", my_1);
	printf("my_cat string =%s\n", my_dest_1);
	// printf("Return Value my = %d\n", src_2);
	// printf("my_cat string =%s\n", my_dest_2);
;
}
