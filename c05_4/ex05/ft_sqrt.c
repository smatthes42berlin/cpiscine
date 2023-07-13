/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/28 10:46:40 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_sqrt_binary_search(int nb)
{
	int l;
	int r;
	int mid;

	l = 0;
	r = nb / 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (l <= r)
	{
		mid = (l + r) / 2;
		
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (0);
}
*/

int	ft_sqrt(int nb)
{
	long	i;
	long	nb_l;

	if (nb < 0)
		return (0);
	i = 0;
	nb_l = (long) nb;
	while (i * i <= nb_l)
	{
		if (i * i == nb_l)
			return (i);
		i++;
	}
	return (0);
}
