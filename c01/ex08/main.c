/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 07:36:44 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size);
void	print_arr(int *arr, int arr_len);

int	main(void)
{
	int tab[] = {1,5,37,4,87,6,7};
	int tab2[] = {1};
	int tab3[] = {2,1};
	int tab4[] = {3,1,2};
	int tab5[] = {-556,7,2,-3,9,-4,77,99,15,1};
	int tab6[] = {};
	int tab7[] = {-1,-2,-3,-4,-5,-6,-7,-8};

	print_arr(tab, 7);
	ft_sort_int_tab(tab, 7);
	print_arr(tab, 7);

	printf("next case \n\n");
	print_arr(tab2, 1);
	ft_sort_int_tab(tab2, 1);
	print_arr(tab2, 1);
	
	printf("next case \n\n");
	print_arr(tab3, 2);
	ft_sort_int_tab(tab3, 2);
	print_arr(tab3, 2);

	printf("next case \n\n");
	print_arr(tab4, 3);
	ft_sort_int_tab(tab4, 3);
	print_arr(tab4, 3);

	printf("next case \n\n");
	print_arr(tab5, 10);
	ft_sort_int_tab(tab5, 10);
	print_arr(tab5, 10);
	
	printf("next case \n\n");
	print_arr(tab6, 0);
	ft_sort_int_tab(tab6, 0);
	print_arr(tab6, 0);
	
	printf("next case \n\n");
	print_arr(tab7, 8);
	ft_sort_int_tab(tab7, 8);
	print_arr(tab7, 8);
}


void	print_arr(int *arr, int arr_len)
{
	int counter = 0;

	while (counter < arr_len)
	{
		printf("%d  \n", arr[counter]);
		counter++;
	}

	printf("\n \n");
	
}
