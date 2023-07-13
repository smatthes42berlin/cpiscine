/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:30:42 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		calc_final_len(int size, char **strs, char *sep);
int		ft_strlen(char *str);
void	add_str_to_final(char *str, char **temp_str);	
void	add_sep_to_final(int size, char *sep, char **temp_str, int pos);	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		final_str_len;
	char	*final_str;
	char	*temp_str;
	int		i;

	if (size == 0)
	{
		final_str = malloc(sizeof(*final_str));
		*final_str = '\0';
		return (final_str);
	}
	final_str_len = calc_final_len(size, strs, sep);
	temp_str = malloc(sizeof(*final_str) * final_str_len);
	final_str = temp_str;
	i = -1;
	while (++i < size)
	{
		add_str_to_final(strs[i], &temp_str);
		add_sep_to_final(size, sep, &temp_str, i);
	}	
	final_str[final_str_len - 1] = '\0';
	return (final_str);
}

void	add_sep_to_final(int size, char *sep, char **temp_str, int pos)
{
	int	i;

	if (pos < size - 1)
	{
		i = 0;
		while (sep[i])
		{
			**temp_str = sep[i];
			(*temp_str)++;
			i++;
		}
	}
}	

void	add_str_to_final(char *str, char **temp_str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		**temp_str = str[i];
		(*temp_str)++;
		i++;
	}
}	

int	calc_final_len(int size, char **strs, char *sep)
{
	int	sep_len;
	int	final_str_len;
	int	i;

	sep_len = ft_strlen(sep);
	final_str_len = 0;
	i = -1;
	while (++i < size)
	{
		final_str_len += ft_strlen(strs[i]);
	}
	final_str_len += (size - 1) * sep_len + 1;
	return (final_str_len);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}
