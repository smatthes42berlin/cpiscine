/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fried_functions1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:11:18 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 22:47:48 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

int	ft_find_len_num(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		count++;
	}
	return (count);
}

int	ft_find_len_filename(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (ft_isalphanum(str[i]) || str[i] == '.')
	{
		i++;
		count++;
	}
	return (count);
}

char	*ft_check_argument_is_num(char *str)
{
	char	*clean_str;
	int		len;
	int		i;
	int		j;

	len = ft_find_len_num(str);
	clean_str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+')
		i++;
	j = 0;
	if (str[i] < '0' || str[i] > '9')
	{
		return (NULL);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		clean_str[j++] = str[i++];
	}
	clean_str[j] = '\0';
	return (clean_str);
}

char	*ft_check_dict_file(char *str)
{
	char	*clean_str;
	int		len;
	int		i;
	int		j;

	len = ft_find_len_filename(str);
	clean_str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	j = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]) || str[i] == '.' \
			|| str[i] == '-' || str[i] == '_')
			clean_str[j++] = str[i++];
		else
			return (NULL);
	}
	return (clean_str);
}
