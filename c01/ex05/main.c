/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/19 13:34:20 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_putstr.c"

void	ft_putstr(char *str);

int	main(void)
{
	char *str1 = "a b c \n";
	char str2[] = "1 2 3 \n";
	
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("\n");
	ft_putstr("234");
	ft_putstr("243");
	ft_putstr("-1");
	
}


