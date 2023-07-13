/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:05:45 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/29 08:27:34 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_strlen(char *str);
void	sort_arg(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int	name_len;
	int	i;

	sort_arg(argc, argv);
	i = 0;
	while (++i < argc)
	{	
		name_len = ft_strlen(argv[i]);
		write(1, argv[i], name_len);
		write(1, "\n", 1);
	}
	return (0);
}

void	sort_arg(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;	

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
