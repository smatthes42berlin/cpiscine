/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 08:25:29 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/05 09:39:38 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include<unistd.h>

void	write_nbr(long nb);
void	ft_putnbr(int nb);
void	print_digits(long pos_nb);
void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
	return ;
}

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
	write(1, "\n", 1);
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

void	ft_putstr(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
