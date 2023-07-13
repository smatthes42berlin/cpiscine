/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 09:41:34 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_le;

	dest_le = 0;
	while (dest[dest_le] != '\0')
		dest_le++;
	while (*src != '\0')
	{
		dest[dest_le] = *src;
		src++;
		dest_le++;
	}
	dest[dest_le] = '\0';
	return (dest);
}
