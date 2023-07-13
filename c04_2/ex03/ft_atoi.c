/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/27 14:18:58 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_type(char c);
int		ft_pow(int base, int exp);
int		get_num_digs(char *str);

int	ft_atoi(char *str)
{
	int		sign;
	long	res;
	int		i;
	int		len_val_digs;

	sign = 1;
	res = 0;
	i = 0;
	while (check_type(*str) == 's')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	len_val_digs = get_num_digs(str);
	while (check_type(*str) == 'n')
	{
		res += (*str - '0') * ft_pow(10, (len_val_digs - i - 1));
		i++;
		str++;
	}		
	return (res * sign);
}

int	get_num_digs(char *str)
{
	int	len;

	len = 0;
	while (check_type(*str) == 'n')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_pow(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * ft_pow(base, exp - 1));
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
