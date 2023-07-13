/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 05:44:01 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/04 15:52:55 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define ULL unsigned long long
#define WIDTH 16
#define DELIMITER " "

int	ft_strlen(char *str);

void	print_hex(ULL addr_number, int length)
{
	int		digit;
	char	*digits;

	digits = "0123456789abcdef";
	if (addr_number < 16)
	{
		while (--length > 0)
			write(1, "0", 1);
		write(1, &digits[addr_number], 1);
		return ;
	}
	digit = digits[addr_number % 16];
	print_hex(addr_number /= 16, length - 1);
	write(1, &digit, 1);
}

/*
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}
*/

void	print_addr_vals(void *addr, unsigned int width, int hex, char *delim)
{
	unsigned int	i;

	i = -1;
	while (++i < width)
	{
		if (hex)
			print_hex(*(unsigned char *) addr, 2);
		else if (*(unsigned char *) addr > 31 && *(unsigned char *) addr < 127)
			write(1, addr, 1);
		else
			write(1, ".", 1);
		if ((!hex || (hex && i % 2 == 1)) && *delim)
			write(1, delim, 1);
		addr++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				lines;
	unsigned int	width;
	unsigned int	missing_chars;

	lines = -1;
	width = WIDTH;
	while (1)
	{
		if (size - (++lines) * WIDTH < 16)
			width = size - lines * WIDTH;
		if (!width)
			break ;
		print_hex((ULL) addr, 16);
		write(1, ":" DELIMITER, 2);
		print_addr_vals(addr, width, 1, DELIMITER);
		missing_chars = (WIDTH - width) * (2 + ft_strlen(DELIMITER));
		missing_chars -= (WIDTH - width) / 2;
		while (missing_chars-- > 0)
			write(1, DELIMITER, 1);
		print_addr_vals((addr += width) - width, width, 0, "");
		write(1, "\n", 1);
		if (width != WIDTH)
			break ;
	}
	return (addr);
}

/* ////
#include <stdio.h>
#define STR "\x42\x6f\x6e\x6a\x6f\x75\x72\x20\x6c\x65" \
			"\x73\x20\x61\x6d\x69\x6e\x63\x68\x65\x73" \
			"\x09\x0a\x09\x63\x07\x20\x65\x73\x74\x20" \
			"\x66\x6f\x75\x09\x74\x6f\x75\x74\x09\x63" \
			"\x65\x20\x71\x75\x20\x6f\x6e\x20\x70\x65" \
			"\x75\x74\x20\x66\x61\x69\x72\x65\x20\x61" \
			"\x76\x65\x63\x09\x0a\x09\x70\x72\x69\x6e" \
			"\x74\x5f\x6d\x65\x6d\x6f\x72\x79\x0a\x0a" \
			"\x0a\x09\x6c\x6f\x6c\x2e\x6c\x6f\x6c\x0a" \
			"\x20\xff\x00"
#define STR2 "HELLO"

int	main(void)
{
	char    *ptr = STR;
	for (int i = 0; i < 95; ++i)
	{
		printf("Bytes: %d\n", i);
		ft_print_memory(ptr, i);
		write(1, "\n", 1);
	}
	return (0);
}
*/ ////
