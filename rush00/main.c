/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 16:02:08 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

void	rush04(int x, int y);

int	main(void)
{
	rush04(5,5);
	printf("\n 0,1");
	rush04(0,1);
	printf("\n 1,0");
	rush04(1,0);
	printf("\n -1,-1");
	rush04(-1,-1);
	printf("\n, -1,0");
	rush04(-1,0);
	printf("\n 3,3");
	rush04(3,3);
	printf("\n 5,4");
	rush04(5,4);
	printf("\n 10,10");
	rush04(10,10);
	printf("\n 1,5");
	rush04(1,5);
	printf("\n 5,1");
	rush04(5,1);

}


