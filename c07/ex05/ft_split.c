/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:18:07 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/31 20:51:44 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		char_in_str(char *str, char c);
int		count_words(char *str, char *sep);
char	*extract_word(char **str, char *sep);

char	**ft_split(char *str, char *charset)
{
	char	*str_cpy;
	char	**word_arr;
	int		word_num;
	int		i;

	str_cpy = str;
	word_num = count_words(str, charset) + 1;
	word_arr = malloc(sizeof(*word_arr) * word_num);
	if (word_arr == NULL)
		return (NULL);
	i = 0;
	while (*str_cpy != '\0')
	{
		if (char_in_str(charset, *str_cpy))
		{
			str_cpy++;
			continue ;
		}
		word_arr[i] = extract_word(&str_cpy, charset);
		i++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}

char	*extract_word(char **str, char *sep)
{
	char	*word;
	int		word_len;
	int		i;

	word_len = 1;
	i = 0;
	while ((*str)[i] != '\0' && !char_in_str(sep, (*str)[i]))
	{
		word_len++;
		i++;
	}
	i = 0;
	word = malloc(sizeof(*word) * word_len);
	while (**str != '\0' && !char_in_str(sep, **str))
	{
		word[i] = **str;
		*str += 1;
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	state;

	i = 0;
	state = 0;
	while (*str != '\0')
	{
		if (state == 0 && !char_in_str(sep, *str))
		{
			state = 1;
			i++;
		}	
		if (state == 1 && char_in_str(sep, *str))
			state = 0;
		str++;
	}
	return (i);
}

int	char_in_str(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
