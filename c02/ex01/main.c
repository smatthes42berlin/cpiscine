/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/20 13:35:20 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strncpy.c"

void	ft_strcnpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	//char	dest0[1] = "";
	//char	dest1[2] = "d";
	//char	dest5[6] = "DdddD";
	char	dest10[11] = "DddddddddD";
	
	//char	src0[1] = "";
	//char	src1[2] = "s";
	char	src5[6] = "SsssS";
	//char	src10[10] = "SssssssssS";
	
	ft_strncpy(dest10, src5, 8);
	printf("\ndest size is = 10 \n");	
	printf("src size is = 5\n");
	printf("source array: %s \n", src5);
	printf("copied array: %s \n", dest10);
	printf("copied array: %c \n", dest10[0]);
	printf("copied array: %c \n", dest10[1]);
	printf("copied array: %c \n", dest10[2]);
	printf("copied array: %c \n", dest10[3]);
	printf("copied array: %c \n", dest10[4]);
	printf("copied array: %c \n", dest10[5]);
	printf("copied array: %c \n", dest10[6]);
	printf("copied array: %c \n", dest10[7]);
	printf("copied array: %c \n", dest10[8]);
	printf("copied array: %c \n", dest10[9]);
	printf("copied array: %c \n", dest10[10]);
}
