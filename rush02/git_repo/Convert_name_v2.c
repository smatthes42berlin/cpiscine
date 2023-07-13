/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert_name_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <albermud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:29:20 by albermud          #+#    #+#             */
/*   Updated: 2023/04/02 17:15:33 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

char    *get_num_word(unsigned int nb, char ***key_val_arr);

//char	*ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//char	*teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
//char	*tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
//char	*powers[] = {"", "thousand", "million", "billion"};
void	convert_2(unsigned int number, char *result, char ***key_val_arr);
void	convert_1(unsigned int number, char *result, char ***key_val_arr)
{
	if (number == 0)
	{
		ft_strcat(result, get_num_word(0, key_val_arr));
		return;
	}
	if (number >= 1000000000)
	{
		convert_1(number / 1000000000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000000000, key_val_arr));
		//ft_strcat(result, " billion ");
		number %= 1000000000;
	}
	if (number >= 1000000)
	{
		convert_1(number / 1000000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000000, key_val_arr));
		// ft_strcat(result, " million ");
		number %= 1000000;
	}
	if (number >= 1000)
	{
		convert_1(number / 1000, result, key_val_arr);
		ft_strcat(result, get_num_word(1000, key_val_arr));
		// ft_strcat(result, " thousand ");
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
		// ft_strcat(result, " hundred ");
		number %= 100;
	}
	if (number >= 10 && number <= 19)
	{	
		ft_strcat(result, get_num_word(number, key_val_arr));
	//	ft_strcat(result, teens[number - 10]);
		return;
	}
	if (number >= 20)
	{
		ft_strcat(result, get_num_word(number, key_val_arr));
		// ft_strcat(result, tens[number / 10]);
		number %= 10;
		if (number > 0)
			ft_strcat(result, " ");
	}
	if (number > 0)
		ft_strcat(result, get_num_word(number, key_val_arr));
		//ft_strcat(result, ones[number]);
}

void	deciding_convert(unsigned int number, char *result, char ***key_val_arr)
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

/*
#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter a number between 0 and 4,294,967,295: ");
    scanf("%u", &number);

    char result[1000] = "";
    deciding_convert(number, result);
    printf("%s\n", result);

    return 0;
}
*/
