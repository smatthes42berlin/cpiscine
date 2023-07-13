/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/19 13:41:53 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d \n", ft_strlen("1"));
	printf("%d \n", ft_strlen("22"));
	printf("%d \n", ft_strlen("333"));
	printf("%d \n", ft_strlen("4444"));
	printf("%d \n", ft_strlen(""));
	printf("%d \n", ft_strlen(""));
	
}


