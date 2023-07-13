/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/22 17:39:18 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strstr.c"
# include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[10] = "BABACBBD";
	char to_find[10] = "BACB";

	char *def_res = strstr(str, to_find);
	char *my_res = ft_strstr(str, to_find);

	printf("def res =%s", def_res);
	printf("my res =%s", my_res);
}

