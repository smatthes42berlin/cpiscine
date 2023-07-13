/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 07:55:26 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_ultimate_ft.c"

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int nbr;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	nbr = 10;

	ptr1 = &nbr;	
	ptr2 = &ptr1;	
	ptr3 = &ptr2;	
	ptr4 = &ptr3;	
	ptr5 = &ptr4;	
	ptr6 = &ptr5;	
	ptr7 = &ptr6;	
	ptr8 = &ptr7;	
	ptr9 = &ptr8;	

	printf("%d \n", nbr);
	ft_ultimate_ft(ptr9);
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


