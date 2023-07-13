/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 08:25:29 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 14:56:18 by smatthes         ###   ########.fr       */
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
	t_stock_str	last_struct;
//	t_stock_str	*new_struct_ptr;
	int			i;

	arr_of_struct = malloc(sizeof(*arr_of_struct) * (ac + 1));
	if (arr_of_struct == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr_of_struct[i].size = 6;
		arr_of_struct[i].str = av[i];
		arr_of_struct[i].copy = av[i];
//		new_struct_ptr = create_struct(av[i]);
//		if (new_struct_ptr == NULL)
//			return (NULL);
//		arr_of_struct[i] = *new_struct_ptr;
	}
	last_struct.str = NULL;
	arr_of_struct[ac] = last_struct;
	return (arr_of_struct);
}

//t_stock_str	*create_struct(char *str)
//{
//	int			str_len;
//	t_stock_str	*struct_ptr;
//
//	struct_ptr = malloc(sizeof(t_stock_str));
//	str_len = ft_strlen(str);
//	struct_ptr->str = malloc(sizeof(*(struct_ptr->str)) * (str_len + 1));
//	struct_ptr->copy = malloc(sizeof(*(struct_ptr->copy)) * (str_len + 1));
//	if (struct_ptr->str == NULL || struct_ptr->copy == NULL)
//		return (NULL);
//	struct_ptr->size = str_len;
//	ft_strcpy(struct_ptr->str, str);
//	ft_strcpy(struct_ptr->copy, str);
//	return (struct_ptr);
//}

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
