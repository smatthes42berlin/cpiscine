/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 07:39:03 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(long pos_nb);

void	write_nbr(long nb)
{
	char	ch;

	ch = nb % 10 + '0';
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	long	pos_nb;

	pos_nb = (long)nb;
	if (nb < 0)
	{
		pos_nb = pos_nb * -1;
		write(1, "-", 1);
	}
	print_digits(pos_nb);
}

void	print_digits(long pos_nb)
{
	if (pos_nb < 10)
	{
		write_nbr(pos_nb);
		return ;
	}
	print_digits(pos_nb / 10);
	write_nbr(pos_nb);
}
