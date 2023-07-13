/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:05:43 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 17:07:58 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"
#include "general_functions.c"
#include "Convert_name_v2.c"

char    ***read_dict(char *file_path, char ***key_val_arr);

int ft_find_len_num(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++; 
	}
	while(str[i] == '+')
	{
		i++; 
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++; 
		count++; 
	}
	return count;
}

int ft_find_len_filename(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++; 
	}
	while (ft_isalphanum(str[i]) || str[i] == '.')
	{
		i++; 
		count++; 
	}
	return count;
}

char *ft_check_argument_is_num(char *str)
{
	char *clean_str;
	int len; 
	int i;
	int j;
	
	len = ft_find_len_num(str);
	//printf("Len: %d\n", len);
	clean_str = malloc(sizeof(char)*len+1);

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++; 
	}
	while(str[i] == '+')
	{
		i++; 
	}
	while (str[i] == '0')
	{
		i++;
	}
	j = 0;
	if (str[i] <= '0' || str[i] >= '9')
	{
		return (NULL);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		clean_str[j++] = str[i++];
	}
	clean_str[j] = '\0';

	return (clean_str);
}

char *ft_check_dict_file(char *str)
{
	char *clean_str;
	int len; 
	int i;
	int j;
	
	len = ft_find_len_filename(str);
	//printf("Len: %d\n", len);
	clean_str = malloc(sizeof(char)*len+1);
	
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++; 
	}
	j = 0;
	if (str[i] == '\0')
	{
		write(1, "Error - Empty File String\n", 26);
		return NULL;
	}
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]) || str[i] == '.' \
			|| str[i] == '-' || str[i] == '_')
		{
			clean_str[j++] = str[i++];
		}
		else 
		{
			write(1, "Error - Mistake in Filestring\n", 30);
			break;
		} 
	}
	return clean_str;
}

int handling_arguments(int argc, char **argv, char *a1, char *a2)
{
	if (argc == 2)
	{
		a1 = ft_check_argument_is_num(argv[1]);
		a2 = NULL;
		if (a1 == NULL)
		{
			write(1, "Error - False Number Argument\n", 30);
			return 0;
		}
		else 
		{
			ft_putstring(a1);
			return ft_atoi(a1);
		} 
	}
	//argument1 = ft_check_argument_is_num("420");
	//argument2 = ft_check_dict_file("numbers.dict");
	else if (argc == 3)
	{
		a1 = ft_check_dict_file(argv[1]); 
		a2 = ft_check_argument_is_num(argv[2]);
		if (a1 == NULL || a2 == NULL)
		{
			write(1, "Error - Arguments Wrong\n", 24);
		}
		else 
		{
			// ft_putstring(a1);
			// ft_putstring(a2);
			return (ft_atoi(a2));
		} 
	}
	else if (argc != 3)
	{
		a1 = NULL;
		a2 = NULL;
		write(1, "Not the right amount of arguments\n", 34);
	}
	return 0;
}

int main(int argc, char **argv)
{
	char			*argument1;
	char 			*argument2;
	unsigned int	arg_num;
	char 			result[1000] = "";
	char			***key_val_arr;
	int				i;

	argument1 = NULL;
	argument2 = NULL;
	arg_num = handling_arguments(argc, argv, argument1, argument2);

	printf("Num: %d\n", arg_num);
	if(!arg_num)
	{
		write (1, "Error\n", 6); 
		return -1; 
	}

	i = 0;
	key_val_arr = malloc(sizeof(*key_val_arr) * 33);
	key_val_arr[32] = NULL;
	while (i < 32)
	{
		key_val_arr[i] = malloc(sizeof(**key_val_arr) * 2);
		i++;
	}
	key_val_arr = read_dict("numbers.dict", key_val_arr);
	i = 0;
	while (i < 32)
	{
		printf("$%s$\n", key_val_arr[i][0]);
		printf("$%s$\n\n", key_val_arr[i][1]);
		i++;
	}
    //printf("Enter a number between 0 and 4,294,967,295: ");
    // scanf("%u", &number);
    deciding_convert(arg_num, result, key_val_arr);
    printf("%s\n", result);

	return 0;
}

