/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:06:20 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 22:50:16 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

char	***allo_mem(void)
{
	char	***key_val_arr;
	int		i;

	i = 0;
	key_val_arr = malloc(sizeof(*key_val_arr) * 33);
	key_val_arr[32] = NULL;
	while (i < 32)
	{
		key_val_arr[i] = malloc(sizeof(**key_val_arr) * 2);
		i++;
	}
	return (key_val_arr);
}

void	free_mem(char ***key_val_arr, int level)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (level == 3)
		{
			free(key_val_arr[i][0]);
			free(key_val_arr[i][1]);
		}
		free(key_val_arr[i]);
		i++;
	}
	free(key_val_arr);
}
