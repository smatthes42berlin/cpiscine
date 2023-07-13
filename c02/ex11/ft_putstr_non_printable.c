/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/23 09:12:07 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_printable(char c);
void			print_special(char c);
unsigned char	to_base16(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int	is_printable;

	while (*str != '\0')
	{
		is_printable = ft_char_is_printable(*str);
		if (is_printable)
			write(1, str, 1);
		else
			print_special(*str);
		str++;
	}
}

void	print_special(char c)
{
	char			c_as_hex[3];
	unsigned char	c_u;

	c_u = (unsigned char) c;
	c_as_hex[0] = '\\';
	c_as_hex[2] = to_base16(c_u);
	c_as_hex[1] = to_base16(c_u / 16);
	write(1, c_as_hex, 3);
}

unsigned char	to_base16(unsigned char c)
{
	char	*str;

	str = "0123456789abcdef";
	return (str[c % 16]);
}

int	ft_char_is_printable(char c)
{
	if (c > 126 || c < 32)
		return (0);
	return (1);
}
