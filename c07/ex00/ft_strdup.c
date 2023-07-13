/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:11:44 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		str_len;
	int		i;

	i = 0;
	str_len = ft_strlen(src);
	dest = malloc(sizeof(*src) * str_len + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}
