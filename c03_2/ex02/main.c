/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/22 16:14:30 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strcat.c"
# include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char def_dest[10] = "ABC";
	char def_src[10] = "22";
	char my_dest[10] = "ABC";
	char my_src[10] = "22";

	strcat(def_dest, def_src);
	ft_strcat(my_dest, my_src);

	printf("def_cat string =%s", def_dest);
	printf("my_cat string =%s", my_dest);
}

