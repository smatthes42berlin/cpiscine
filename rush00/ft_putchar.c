/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 14:21:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int width, char left_char, char sep_char, char right_char)
{
	int	counter;

	ft_putchar(left_char);
	counter = 1;
	while (counter < width - 1)
	{	
		ft_putchar(sep_char);
		counter++;
	}
	if (width > 1)
	{
		ft_putchar(right_char);
	}
}
