/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/19 07:58:41 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_ft.c"

void	ft_ft(int *nbr);

int	main(void)
{
	int nbr;
	int *ptr;

	ptr = &nbr;	
	*ptr = 5;
	printf("%d \n", nbr);
	ft_ft(ptr);
	printf("%d \n", nbr);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(0);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(1);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(2);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(9);
//	printf("\n");
//	printf("\n");
//	ft_print_combn(10);
//	printf("\n");
//	printf("\n");
}


