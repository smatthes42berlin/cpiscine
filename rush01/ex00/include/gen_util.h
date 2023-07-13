/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_util.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:35:52 by akarami           #+#    #+#             */
/*   Updated: 2023/03/26 21:32:10 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEN_UTIL_H
# define GEN_UTIL_H

int		str_len(char *str);
int		put_error(int exit_code);
void	ft_putchar(char c);
int		*find_position(int **board, int n, int *pos);
void	print_board(int **board, int n);

#endif
