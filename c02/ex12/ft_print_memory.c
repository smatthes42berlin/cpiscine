/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/23 09:48:41 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*long_to_hex_str(unsigned long num, char *hex, unsigned int digs);
void	ft_putstr_non_printable(char *str, unsigned int size);
char	*chars_to_hex(char *addr, char *hex, unsigned int digs);
void	pri_l(void *addr, char *hex_addr, char *hex_val, unsigned int num_cha);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	counter;
	char			hex_addr[17];
	char			hex_val[40];

	if (size > 0)
	{	
		counter = -1;
		while (++counter < size / 16)
		{
			pri_l(addr, hex_addr, hex_val, 16);
			addr = addr + 16;
		}
		pri_l(addr, hex_addr, hex_val, size % 16);
	}
	return (addr);
}

void	pri_l(void *addr, char *hex_addr, char *hex_val, unsigned int num_cha)
{
	if (num_cha > 0)
	{	
		chars_to_hex((char *)addr, hex_val, num_cha);
		long_to_hex_str((unsigned long)addr, hex_addr, 16);
		ft_putstr_non_printable(hex_addr, 16);
		write(1, ": ", 2);
		ft_putstr_non_printable(hex_val, 39);
		write(1, " ", 1);
		ft_putstr_non_printable((char *)addr, num_cha);
		write(1, "\n", 1);
	}
}

char	*chars_to_hex(char *addr, char *hex, unsigned int digs)
{
	unsigned int	counter;
	char			char_as_hex[3];
	unsigned int	numb_ws;

	numb_ws = digs / 2 - 1;
	counter = -1;
	while (++counter < 40)
	{
		hex[counter] = ' ';
	}	
	counter = 0;
	while (counter < (digs * 2) + numb_ws)
	{
		long_to_hex_str((unsigned long)(unsigned char)*addr, char_as_hex, 2);
		hex[counter] = char_as_hex[0];
		hex[counter + 1] = char_as_hex[1];
		if (counter % 5 == 2)
			counter = counter + 3;
		else
			counter = counter + 2;
		addr++;
	}
	return (hex);
}

char	*long_to_hex_str(unsigned long num, char *hex, unsigned int digs)
{
	char			*digits;
	unsigned int	counter;
	unsigned int	curr_arr_pos;

	digits = "0123456789abcdef";
	counter = 0;
	hex[digs] = '\0';
	while (counter < digs)
	{
		curr_arr_pos = digs - counter - 1;
		if (num > 0)
		{	
			hex[curr_arr_pos] = digits[num % 16];
			num = num / 16;
		}
		else if (num > 0 && num < 16)
			hex[curr_arr_pos] = digits[num % 16];
		else
			hex[curr_arr_pos] = '0';
		counter++;
	}
	return (hex);
}

void	ft_putstr_non_printable(char *str, unsigned int size)
{
	int				is_printable;
	unsigned int	counter;

	counter = 0;
	while (counter < size)
	{
		is_printable = !(str[counter] > 126 || str[counter] < 32);
		if (is_printable)
			write(1, &str[counter], 1);
		else
			write(1, ".", 1);
		counter++;
	}
}
