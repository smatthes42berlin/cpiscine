/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:48:00 by tischmid          #+#    #+#             */
/*   Updated: 2023/03/26 20:00:10 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_INPUT_H
# define HANDLE_INPUT_H

int		handle_input(int argc, char **argv, int *borders, int n);
int		check_inp_valid(int argc, char **argv, int n);
void	atoi_arr(char **argv, int *borders, int n);
int		check_opposite_sum(int *borders, int n);

#endif
