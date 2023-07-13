/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 08:20:18 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i);
void	cond_print_num(int tot_num_dig, int cur_rec_level, int *num_dig);
void	print_num_arr(int *digits_number, int tot_num_dig);
void	set_elem_zero(int arr_leng, int *arr);

void	ft_print_combn(int n)
{
	int	num_dig[10];

	set_elem_zero(10, num_dig);
	if (n < 1 || n > 9)
	{
		return ;
	}
	while (num_dig[0] < 10)
	{	
		if (n == 1)
		{
			ft_putchar(num_dig[0]);
		}
		else
		{	
			cond_print_num(n, 1, num_dig);
		}
		num_dig[0] = num_dig[0] + 1;
	}	
}

void	cond_print_num(int tot_num_dig, int cur_rec_level, int *num_dig)
{
	if (tot_num_dig == cur_rec_level)
	{
		print_num_arr(num_dig, tot_num_dig);
		return ;
	}
	else
	{
		while (num_dig[cur_rec_level] < 10)
		{
			if (num_dig[cur_rec_level] > num_dig[cur_rec_level - 1])
			{
				cond_print_num(tot_num_dig, cur_rec_level + 1, num_dig);
			}
			num_dig[cur_rec_level] = num_dig[cur_rec_level] + 1;
		}
		num_dig[cur_rec_level] = 0;
	}
}

void	print_num_arr(int *digits_number, int tot_num_dig)
{
	int	counter;
	int	counter2;

	counter = 0;
	counter2 = 1;
	while (counter < tot_num_dig)
	{
		ft_putchar(digits_number[counter]);
		counter++;
	}
	while (counter2 < tot_num_dig + 1)
	{
		if (digits_number[tot_num_dig - counter2] <= 9 - counter2)
		{
			write(1, ", ", 1);
			break ;
		}
		counter2++;
	}
}

void	set_elem_zero(int arr_leng, int *arr)
{
	int	counter;

	counter = 0;
	while (counter < arr_leng)
	{
		arr[counter] = 0;
		counter ++;
	}
}

void	ft_putchar(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}
