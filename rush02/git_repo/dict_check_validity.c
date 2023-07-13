/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_check_validity.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:09:29 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 16:27:10 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_pos(char *str);
int		ptr_nxt_char(char **ptr, char c);
char	**make_static_key_arr(char **stat_key_arr);
char	*ft_strstr(char *str, char *to_find);
int		any_elem_in_str(char *val_str, char **stat_key_arr);
int		check_key(char *str);
int		check_val(char *str);
int		check_row_validity(char *row_arr, char **stat_key_arr, int *key_num);
char	**ft_split(char *str, char *charset);

int	check_dict_validity(char *raw_dict_buf)
{
	char	**row_arr;
	char	*stat_key_arr[33];
	int		key_num;

	key_num = 0;
	make_static_key_arr(stat_key_arr);
	row_arr = ft_split(raw_dict_buf, "\n");
	while (*row_arr != NULL)
	{
		if (!check_row_validity(*row_arr, stat_key_arr, &key_num))
			return (0);
		row_arr++;
	}
	if (key_num < 32)
		return (0);
	return (1);
}

int	check_row_validity(char *row_arr, char **stat_key_arr, int *key_num)
{
	char	**one_key_val;

	one_key_val = ft_split(row_arr, ":");
	ptr_nxt_char(&row_arr, ':');
	if (!check_key(one_key_val[0]) || !check_val(row_arr))
		return (0);
	if (any_elem_in_str(one_key_val[0], stat_key_arr))
	{
		(*key_num)++;
	}
	return (1);
}

int	check_key(char *str)
{
	if (ft_atoi_pos(str) < 0)
		return (0);
	return (1);
}

int	check_val(char *str)
{
	while (*str != '\0')
	{
		if (*str > 126 || *str < 32)
		{
			return (0);
		}		
		str++;
	}
	return (1);
}

int	any_elem_in_str(char *val_str, char **stat_key_arr)
{
	int		dict_key;
	int		static_key;

	dict_key = ft_atoi_pos(val_str);
	while (*stat_key_arr != NULL)
	{
		static_key = ft_atoi_pos(*stat_key_arr);
		if (static_key == dict_key)
		{
			return (1);
		}
		stat_key_arr++;
	}
	return (0);
}
