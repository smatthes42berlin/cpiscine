/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/16 14:28:01 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	write_nbr(int nb)
{
	char	ch;

	ch = nb % 10 + '0';	
	write(1, &ch, 1);	
}

long	handle_neg_int(int nb)
{
	long pos_nb;

	pos_nb = nb;	
	pos_nb = labs(nb);	

	printf("%ld", pos_nb);

	return pos_nb;
}

void	ft_putnbr(int nb)
{
	long pos_nb;

	pos_nb = handle_neg_int(nb);	
	printf("%ld", pos_nb);
}
