/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/21 13:48:46 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_putstr_non_printable.c"

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	src[10][50] = {"asd \177 \n", "Coucou\n tu vas bien?" };	

	int counter = 0;
	while(counter < 2)
	{
		ft_putstr_non_printable(src[counter]);
		//printf("\n %s \n\n", src[counter]);
		//printf("\n\n\n");
		counter++;
	}
}
