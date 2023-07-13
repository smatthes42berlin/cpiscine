/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mem.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:46:53 by akarami           #+#    #+#             */
/*   Updated: 2023/03/26 20:36:34 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_MEM_H
# define HANDLE_MEM_H

int		**alloc_mem(int n);
void	free_mem(int *borders, int **board, int n);

#endif
