/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 07:42:11 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_d2(char d1);
void	check_d3(char d1, char d2);
void	print_3_digits(char d1, char d2, char d3);
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	d1;	

	d1 = '0';
	while (d1 <= '9')
	{
		check_d2(d1);
		d1++;
	}
}

void	check_d2(char d1)
{
	char	d2;

	d2 = '0';
	while (d2 <= '9')
	{
		if (d2 > d1)
		{
			check_d3(d1, d2);
		}
		d2++;
	}
}

void	check_d3(char d1, char d2)
{
	char	d3;

	d3 = '0';
	while (d3 <= '9')
	{
		if (d3 > d1 && d3 > d2)
		{
			print_3_digits(d1, d2, d3);
		}
		d3++;
	}
}

void	print_3_digits(char d1, char d2, char d3)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);
	if (!(d1 == '7' && d2 == '8' && d3 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
