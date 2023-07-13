/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:45:42 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/26 21:28:15 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "include/handle_mem.h"

// Allocates memory and initialized with 0's
int	**alloc_mem(int n)
{
	int	i;
	int	j;
	int	**board;

	board = malloc(n * 8);
	i = -1;
	while (++i < n)
	{
		board[i] = malloc(n * 4);
		j = -1;
		while (++j < n)
			board[i][j] = 0;
	}
	return (board);
}

void	free_mem(int *borders, int **board, int n)
{	
	int	i;

	i = -1;
	while (++i < n)
	{
		free(board[i]);
	}
	free(board);
	free(borders);
}
