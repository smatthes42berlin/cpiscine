/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert_name_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:29:20 by albermud          #+#    #+#             */
/*   Updated: 2023/04/02 20:36:23 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	convert_1(unsigned int number, char *result, char ***key_val_arr)
{
	if (number == 0)
	{
		ft_strcat(result, get_num_word(0, key_val_arr));
		return ;
	}
	if (number >= 1000000000)
	{
		convert_1(number / 1000000000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000000000, key_val_arr));
		number %= 1000000000;
	}
	if (number >= 1000000)
	{
		convert_1(number / 1000000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000000, key_val_arr));
		number %= 1000000;
	}
	if (number >= 1000)
	{
		convert_1(number / 1000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000, key_val_arr));
		number %= 1000;
	}	
	convert_2(number, result, key_val_arr);
}

void	convert_2(unsigned int number, char *result, char ***key_val_arr)
{
	if (number >= 100)
	{
		convert_1(number / 100, result, key_val_arr);
		ft_strcat(result, get_num_word(100, key_val_arr));
		number %= 100;
	}
	if (number >= 10 && number <= 19)
	{	
		ft_strcat(result, get_num_word(number, key_val_arr));
		return ;
	}
	if (number >= 20)
	{
		ft_strcat(result, get_num_word(number - (number % 10), key_val_arr));
		number %= 10;
	}
	if (number > 0)
		ft_strcat(result, get_num_word(number, key_val_arr));
}

void	conv_num(unsigned int number, char *result, char ***key_val_arr)
{	
	if (number < 1000)
	{
		convert_2(number, result, key_val_arr);
	}
	else
	{
		convert_1(number, result, key_val_arr);
	}
}
