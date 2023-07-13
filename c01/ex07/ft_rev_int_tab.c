/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:20:35 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 08:20:37 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left_val;

	if (size > 1)
	{
		left_val = tab[0];
		tab[0] = tab[size - 1];
		tab[size - 1] = left_val;
		ft_rev_int_tab(tab + 1, size - 2);
	}
	return ;
}
