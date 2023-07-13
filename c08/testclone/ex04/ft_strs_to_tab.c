/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 08:25:29 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 09:21:01 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"ft_stock_str.h"

t_stock_str	*create_struct(char *str);
int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr_of_struct;
	
	int			i;

	arr_of_struct = malloc(sizeof(*arr_of_struct) * (ac + 1));
	if (arr_of_struct == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr_of_struct[i] = strdup(av[i]);
		arr_of_struct[i] = strdup(av[i]);
		arr_of_struct[i] = strlen(av[i]);
	}
	arr_of_struct[ac].str = NULL;
	return (arr_of_struct);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;	

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
