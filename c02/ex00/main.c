/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/23 08:39:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest0[1] = "";
	char	dest1[2] = "d";
	char	dest5[6] = "DdddD";
	char	dest10[11] = "DddddddddD";
	
	char	src0[1] = "";
	char	src1[2] = "s";
	char	src5[6] = "sssss";
	//	char	src10[10] = "ssssssssss";
	

	ft_strcpy(dest0, src0);
	printf("\ndest size is = 0 \n");	
	printf("src size is = 0\n");
	printf("source array: %s\n", src0);
	printf("copied array: %s\n", dest0);

	ft_strcpy(dest1, src1);
	printf("\ndest size is = 1 \n");	
	printf("src size is = 1 \n");
	printf("source array: %s\n", src1);
	printf("copied array: %s\n", dest1);
	
	ft_strcpy(dest5, src5);
	printf("\ndest size is = 5 \n");	
	printf("src size is = 5 \n");
	printf("source array: %s\n", src5);
	printf("copied array: %s\n", dest5);
	
	ft_strcpy(dest1, src5);
	printf("\ndest size is = 10 \n");	
	printf("src size is = 5\n");
	printf("source array: %s \n", src5);
	printf("copied array: %s \n", dest10);
	printf("copied array: %c \n", dest10[4]);
	printf("copied array: %c \n", dest10[5]);
	printf("copied array: %c \n", dest10[6]);
	printf("copied array: %c \n", dest10[7]);
	printf("copied array: %c \n", dest10[8]);
	printf("copied array: %c \n", dest10[9]);
	printf("copied array: %c \n", dest10[10]);
}
