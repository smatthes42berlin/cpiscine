/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 11:56:50 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_le;

	dest_le = 0;
	while (dest[dest_le] != '\0')
		dest_le++;
	while (nb > 0 && *src != '\0')
	{
		dest[dest_le] = *src;
		src++;
		dest_le++;
		nb--;
	}
	dest[dest_le] = '\0';
	return (dest);
}
