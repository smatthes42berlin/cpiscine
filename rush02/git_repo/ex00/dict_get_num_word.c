/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_get_num_word.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:29:18 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 19:07:13 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "rush02.h"

char	*get_num_word(unsigned int nb, char ***key_val_arr)
{
	int				i;
	unsigned int	key_int;

	i = 0;
	while (key_val_arr[i] != NULL)
	{
		key_int = ft_atoi_pos(key_val_arr[i][0]);
		if (key_int == nb)
			return (key_val_arr[i][1]);
		i++;
	}
	return (NULL);
}
