/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 07:50:58 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_d2(char d1);
void	check_d3(char d1, char d2);
void	check_d4(char d1, char d2, char d3);
void	ft_putchar(char c);

void	ft_print_comb2(void)
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
		check_d3(d1, d2);
		d2++;
	}
}

void	check_d3(char d1, char d2)
{
	char	d3;

	d3 = '0';
	while (d3 <= '9')
	{
		check_d4(d1, d2, d3);
		d3++;
	}
}

void	check_d4(char d1, char d2, char d3)
{
	char	d4;

	d4 = '0';
	while (d4 <= '9')
	{
		if (d3 >= d1 && d4 > d2)
		{
			ft_putchar(d1);
			ft_putchar(d2);
			ft_putchar(' ');
			ft_putchar(d3);
			ft_putchar(d4);
			if (!(d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		d4++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
