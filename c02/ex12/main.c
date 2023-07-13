/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:15:05 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/23 09:48:15 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "ft_print_memory.c"

void	*ft_print_memory(void *addr, unsigned int size);
int	hex_to_int(void	*add);

int	main(void)
{

	// char	*ptr = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
	char	*ptr = "\xff\x6f\x6e\x6a\x6f\x75\x72\x20\x6c\x65\x73\x20\x61\x6d\x69\x6e\x63\x68\x65\x73\x09\x0a\x09\x63\x07\x20\x65\x73\x74\x20\x66\x6f\x75\x09\x74\x6f\x75\x74\x09\x63\x65\x20\x71\x75\x20\x6f\x6e\x20\x70\x65\x75\x74\x20\x66\x61\x69\x72\x65\x20\x61\x76\x65\x63\x09\x0a\x09\x70\x72\x69\x6e\x74\x5f\x6d\x65\x6d\x6f\x72\x79\x0a\x0a\x0a\x09\x6c\x6f\x6c\x2e\x6c\x6f\x6c\x0a\x20\x00";

	//char	*ptr = "Bo\0njo\0uri\0hfgdhfdghfgdhfgdhf les aminches\nc. est fouce qu on peut faire avec ...print_memory...lol\nlol\n .";
	void	*add = ptr;
	// void	*add = &ptr;

	
	// printf("Now I am pointing main at:%s\n", (char *)add);

	write(1, "92 ist \n", 8);
	ft_print_memory(add, 92);
	// write(1, "15 ist \n", 8);
	// ft_print_memory(add, 15);
	// write(1, "16 ist \n", 8);
	// ft_print_memory(add, 16);
	// write(1, "17 ist \n", 8);
	// ft_print_memory(add, 17);
	// write(1, "150 ist \n", 9);
	// ft_print_memory(add, 150);
	// write(1, "1000 ist \n", 10);
	// ft_print_memory(add, 1000);
	// write(1, "10000 ist \n", 11);
	// ft_print_memory(add, 10000);
}

