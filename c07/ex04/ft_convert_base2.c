/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 11:05:38 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base);	
char	check_type(char c);
long	calc_int(char *str, char *base);
long	ft_atoi_base(char *str, char *base);
long	get_base_index(char	*base, char c);
int		ft_strlen(char *str);

long	ft_atoi_base(char *str, char *base)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	if (check_base(base) == 0)
		return (0);
	while (check_type(*str) == 's')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	res = calc_int(str, base);
	return (res * sign);
}

long	calc_int(char *str, char *base)
{	
	long	res;
	int		i;
	long	index;
	long	base_len;

	i = 0;
	res = 0;
	base_len = ft_strlen(base);
	index = get_base_index(base, str[i]);
	while (index >= 0)
	{
		res = index + res * base_len;
		i++;
		index = get_base_index(base, str[i]);
	}
	return (res);
}

long	get_base_index(char	*base, char c)
{
	long	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
		{
			return (i);
		}
	}
	return (-1);
}

char	check_type(char c)
{
	if (c == '\f' || c == '\n' || c == '\r')
		return ('s');
	if (c == '\t' || c == '\v' || c == ' ')
		return ('s');
	if (!(c < '0' || c > '9'))
		return ('n');
	return ('\0');
}

int	check_base(char *base)
{
	char	c;
	int		i;
	int		j;

	i = -1;
	while (base[++i] != '\0')
	{
		c = base[i];
		if (c > 126 || c < 33)
			return (0);
		if (c == '+' || c == '-')
			return (0);
		j = i;
		while (base[++j] != '\0')
			if (base[j] == base[i])
				return (0);
	}
	if (i <= 1)
		return (0);
	return (1);
}
