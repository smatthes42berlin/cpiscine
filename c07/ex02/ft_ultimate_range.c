/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:18:40 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	i = -1;
	*range = (int *)malloc(sizeof(**range) * diff);
	if (*range == NULL)
		return (-1);
	while (++i < diff)
	{
		*(*range + i) = min + i;
	}
	return (diff);
}
