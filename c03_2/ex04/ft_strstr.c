/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:34 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/24 09:49:32 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*check_starts;
	char	*to_find_it;

	to_find_it = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			check_starts = str;
			while (*str == *to_find_it && *to_find_it != '\0')
			{
				str++;
				to_find_it++;
			}		
			str = check_starts;
			if (*to_find_it == '\0')
				return (str);
			to_find_it = to_find;
		}
		str++;
	}
	return (0);
}
