/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:31:54 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 16:39:04 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*get_num_word(unsigned int nb, char ***key_val_arr);
char	***read_dict(char *file_path, char ***key_val_arr);

int	main(void)
{
	char	***key_val_arr;
	int		i;
	char	t_1;

	i = 0;
	key_val_arr = malloc(sizeof(*key_val_arr) * 33);
	key_val_arr[32] = NULL;
	while (i < 32)
	{
		key_val_arr[i] = malloc(sizeof(**key_val_arr) * 2);
		i++;
	}
	key_val_arr = read_dict("numbers.dict", key_val_arr);
	i = 0;
	while (i < 32)
	{
		printf("$%s$\n", key_val_arr[i][0]);
		printf("$%s$\n\n", key_val_arr[i][1]);
		i++;
	}
	*t_1 = get_num_word(100, key_val_arr);
	printf("word_get 1 = %s\n", t_1);
	if (key_val_arr == NULL)
		return (1);
	return (0);
}
