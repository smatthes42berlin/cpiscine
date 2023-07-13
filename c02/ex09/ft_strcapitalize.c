/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:58:02 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/21 08:41:15 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_to_lowcase(char c);
char	char_to_upcase(char c);
char	check_char_type(char c);
int		is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	char	char_type;
	int		parse_state;
	char	*org_ptr;

	org_ptr = str;
	parse_state = 0;
	while (*str != '\0')
	{
		char_type = check_char_type(*str);
		if (char_type == '?')
			parse_state = 0;
		else if (parse_state == 0 && char_type != '?')
		{
			*str = char_to_upcase(*str);
			parse_state = 1;
		}
		else
			*str = char_to_lowcase(*str);
		str++;
	}
	return (org_ptr);
}

char	char_to_lowcase(char c)
{	
	if (check_char_type(c) == 'U')
	{
		return (c + 32);
	}
	return (c);
}

char	char_to_upcase(char c)
{	
	if (check_char_type(c) == 'L')
	{
		return (c - 32);
	}
	return (c);
}

char	check_char_type(char c)
{
	if (c >= 48 && c <= 57)
	{
		return ('N');
	}
	if (c >= 65 && c <= 90)
	{
		return ('U');
	}
	if (c >= 97 && c <= 122)
	{
		return ('L');
	}
	return ('?');
}

int	is_alphanumeric(char c)
{	
	int	char_type;

	char_type = check_char_type(c);
	if (char_type != '?')
	{
		return (1);
	}
	return (0);
}
