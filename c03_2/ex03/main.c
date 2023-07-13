/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 12:00:09 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strncat.c"
# include <string.h>

char	*ft_strcat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char def_dest_1[11] = "AAAAAAAAAA";
	char def_dest_2[4] = "AAA";
	char def_dest_3[4] = "";
	char src[11] = "22222";
	char my_dest_1[11] = "AAAAAAAAAA";
	char my_dest_2[4] = "AAA";
	char my_dest_3[4] = "";

	strncat(def_dest_1, src, 3);
	ft_strncat(my_dest_1, src, 3 );
	strncat(def_dest_2, src, 3);
	ft_strncat(my_dest_2, src, 3 );
	strncat(def_dest_3, src, 3);
	ft_strncat(my_dest_3, src, 3 );

	printf("def_cat string =%s\n", def_dest_1);
	printf("my_cat string =%s\n", my_dest_1);
	printf("def_cat string =%s\n", def_dest_2);
	printf("my_cat string =%s\n", my_dest_2);
	printf("def_cat string =%s\n", def_dest_3);
	printf("my_cat string =%s\n", my_dest_3);
}

