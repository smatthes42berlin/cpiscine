/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:50:54 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 22:56:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "rush02.h"

int	extract_vals_raw_data(char *raw_dict_buf, char ***key_val_arr)
{
	char	*stat_key_arr[33];
	char	**row_arr;
	int		i;

	make_static_key_arr(stat_key_arr);
	row_arr = ft_split(raw_dict_buf, "\n");
	i = 0;
	while (stat_key_arr[i] != NULL)
	{
		if (!find_key_val(stat_key_arr[i], key_val_arr, row_arr, i))
			return (0);
		i++;
	}
	i = -1;
	while (row_arr[++i] != NULL)
	{
		free(row_arr[i]);
		i++;
	}
	free(row_arr);
	return (1);
}

int	find_key_val(char *key, char ***key_val_arr, char **row_arr, int pos)
{
	char	**one_key_val;
	int		i;
	char	*ptr_cpy;
	int		str_len;

	i = -1;
	while (row_arr[++i] != NULL)
	{
		one_key_val = ft_split(row_arr[i], ":");
		if (ft_atoi_pos(one_key_val[0]) != ft_atoi_pos(key))
			continue ;
		ptr_cpy = row_arr[i];
		ptr_nxt_char(&ptr_cpy, ':');
		str_len = ft_strlen(key);
		key_val_arr[pos][0] = malloc(sizeof(***key_val_arr) * (str_len + 1));
		ft_strcpy(key_val_arr[pos][0], key);
		rem_whitespaces(&ptr_cpy);
		str_len = ft_strlen(ptr_cpy);
		key_val_arr[pos][1] = malloc(sizeof(***key_val_arr) * (str_len + 1));
		ft_strcpy(key_val_arr[pos][1], ptr_cpy);
		return (1);
	}
	return (0);
}

void	rem_whitespaces(char **str)
{
	int	i;
	int	start_trailing_ws;

	i = 0;
	while ((*str)[i] == ' ')
		i++;
	(*str) = (*str) + i;
	i = 0;
	while ((*str)[i] != '\0')
	{
		if ((*str)[i] != ' ')
			start_trailing_ws = i + 1;
		i++;
	}
	(*str)[start_trailing_ws] = '\0';
}

int	ptr_nxt_char(char **ptr, char c)
{
	while (**ptr != c)
	{
		if (**ptr == '\0')
			return (0);
		(*ptr) = *ptr + 1;
	}
	(*ptr) = *ptr + 1;
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}
