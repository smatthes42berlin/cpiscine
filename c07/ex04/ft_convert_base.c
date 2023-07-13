/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:44:43 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char *str);
char	*ft_itoa_base(long num, char *base);
int		check_base(char *base);
long	ft_atoi_base(char *str, char *base);
int		calc_num_str_len(long num, long base_len);
void	int_to_str(long num, char *base, char *num_str, int dig_len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	res_int;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	res_int = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(res_int, base_to));
}

char	*ft_itoa_base(long num, char *base)
{
	long	base_len;
	char	*num_str;
	int		num_str_len;
	int		dig_start;
	int		dig_len;

	base_len = (long)ft_strlen(base);
	num_str_len = calc_num_str_len(num, base_len);
	num_str = malloc(sizeof(*num_str) * num_str_len);
	dig_start = 0;
	dig_len = num_str_len - 2;
	if (num < 0)
	{
		num_str[0] = '-';
		num = -num;
		dig_start++;
		dig_len--;
	}
	int_to_str(num, base, (num_str + dig_start), dig_len);
	num_str[num_str_len - 1] = '\0';
	return (num_str);
}

void	int_to_str(long num, char *base, char *num_str, int dig_len)
{
	long	div;
	long	mod;
	int		pos;
	int		base_len;

	pos = 0;
	base_len = ft_strlen(base);
	mod = num % base_len;
	div = num;
	num_str[dig_len - pos++] = base[mod];
	while (pos <= dig_len)
	{	
		div = div / base_len;
		mod = div % base_len;
		num_str[dig_len - pos++] = base[mod];
	}
}

int	calc_num_str_len(long num, long base_len)
{
	int		num_str_len;
	long	i;

	num_str_len = 1;
	i = 1;
	if (num == 0)
	{
		return (++num_str_len);
	}
	if (num < 0)
	{
		num_str_len += 1;
		num = -num;
	}
	while (i <= num)
	{
		num_str_len += 1;
		i *= base_len;
	}
	return (num_str_len);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}
