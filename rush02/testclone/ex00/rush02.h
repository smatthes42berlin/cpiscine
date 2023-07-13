/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:31:46 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 23:19:50 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH02_H
# define RUSH02_H

# include<stdlib.h>

int		ft_isalphanum(char c);
void	ft_putstring(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_isspace(char c);
long	ft_atoi(char *str);
int		ft_find_len_num(char *str);
int		ft_find_len_filename(char *str);
char	*ft_check_argument_is_num(char *str);
char	*ft_check_dict_file(char *str);
long	handle_two_arguments(char **argv);
long	handle_three_arguments(char **argv);
long	handling_arguments(int argc, char **argv);
void	convert_2(unsigned int number, char *result, char ***key_val_arr);
void	convert_1(unsigned int number, char *result, char ***key_val_arr);
void	conv_num(unsigned int number, char *result, char ***key_val_arr);
int		ft_atoi_pos(char *str);
int		ptr_nxt_char(char **ptr, char c);
char	**make_static_key_arr(char **stat_key_arr);
int		any_elem_in_str(char *val_str, char **stat_key_arr);
int		check_key(char *str);
int		check_val(char *str);
int		check_row_validity(char *row_arr, char **stat_key_arr, int *key_num);
char	**ft_split(char *str, char *charset);
int		check_dict_validity(char *raw_dict_buf);
char	*get_num_word(unsigned int nb, char ***key_val_arr);
void	make_first_part(char **stat_key_arr);
void	make_second_part(char **stat_key_arr);
int		find_key_val(char *key, char ***key_val_arr, char **row_arr, int pos);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	rem_whitespaces(char **str);
int		extract_vals_raw_data(char *raw_dict_buf, char ***key_val_arr);
int		get_file_len(char	*file_path);
int		close_file(int fd);
int		open_file(char *file_path);
char	***read_dict(char *file_path, char ***key_val_arr);
int		char_in_str(char *str, char c);
int		count_words(char *str, char *sep);
char	*extract_word(char **str, char *sep);
void	rem_last_ws(char *result);
void	free_mem(char ***key_val_arr, int level);
char	***allo_mem(void);
long	handle_args(int argc, char *argv[]);
int		handle_dict(char ****key_val_arr, int argc, char *argv[]);

#endif
