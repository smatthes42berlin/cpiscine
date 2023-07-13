/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 12:19:12 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_le;
	unsigned int	src_le;

	dest_le = str_len(dest);
	src_le = str_len(src);
	if (size < dest_le)
		return (size + src_le);
	i = 0;
	while (dest_le + 1 + i < size && src[i])
	{
		dest[dest_le + i] = src[i];
		i++;
	}
	dest[dest_le + i] = '\0';
	return (dest_le + src_le);
}

int	str_len(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
