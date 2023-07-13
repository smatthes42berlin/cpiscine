/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/27 18:03:38 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_base(long nbr, char *base, long base_size);
long	ft_strlen(char *str);
int		check_base(char *base);
int		count_chars(char *base, char c);

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	long	base_size;

	base_size = ft_strlen(base);
	if (base_size <= 1 || check_base(base) == 0)
		return ;
	nbr_l = (long) nbr;
	if (nbr_l < 0)
	{
		nbr_l = nbr_l * -1;
		write(1, "-", 1);
	}
	print_base(nbr_l, base, base_size);
}

void	print_base(long nbr, char *base, long base_size)
{
	long	dig;

	dig = nbr % base_size;
	if (nbr < base_size)
	{	
		write(1, &base[dig], 1);
		return ;
	}		
	print_base(nbr / base_size, base, base_size);
	write(1, &base[dig], 1);
}

long	ft_strlen(char *str)
{
	long	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	char	c;

	while (*base != '\0')
	{
		c = *base;
		if (c > 126 || c < 33)
			return (0);
		if (c == '+' || c == '-')
			return (0);
		if (count_chars(base, c) > 1)
			return (0);
		base++;
	}
	return (1);
}

int	count_chars(char *base, char c)
{
	int	count;

	count = 0;
	while (*base != '\0')
	{
		if (*base == c)
			count++;
		base++;
	}
	return (count);
}
