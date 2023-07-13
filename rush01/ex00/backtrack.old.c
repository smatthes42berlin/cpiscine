/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:50:55 by akarami           #+#    #+#             */
/*   Updated: 2023/03/26 22:32:20 by akarami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "include/backtrack.h"

int	is_solved(int **board, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (!board[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	*next_cell_pos(int **board, int n)
{
	int	i;
	int	*pos;

	pos = malloc(2 * 4);
	i = 0;
	while (board[i / n][i % n])
		i++;
	pos[0] = i / n;
	pos[1] = i % n;
	return (pos);
}

// void	*get_candidates(int **board, int n, int next_cell)
// {
// 	return (0);
// }

int	backtrack_old(int **board, int n, int *borders)
{
	int	*next_cell;
	// void *candidates;

	borders++;
	if (is_solved(board, n))
		return (1);
	next_cell = next_cell_pos(board, n);
	printf("x:%d\n", next_cell[0]);
	printf("y:%d\n", next_cell[1]);
	free(next_cell);
	// candidates = get_candidates(board, n, next_cell);
	// printf("%d\n", candidates[0]);
	return (0);
}
