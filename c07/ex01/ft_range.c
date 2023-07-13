/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:13:28 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char *str);

int	*ft_range(int min, int max)
{
	int	*arr;	
	int	diff;
	int	i;

	if (min >= max)
		return (NULL);
	diff = max - min;
	i = -1;
	arr = (int *)malloc(sizeof(*arr) * diff);
	if (arr == NULL)
		return (NULL);
	while (++i < diff)
	{
		arr[i] = min + i;
	}
	return (arr);
}
