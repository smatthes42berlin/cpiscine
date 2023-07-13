/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 06:13:07 by tischmid          #+#    #+#             */
/*   Updated: 2023/03/27 10:48:05 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "include/handle_mem.h"
#include "include/handle_input.h"
#include "include/backtrack.h"
#include "include/gen_util.h"

void	print_board(int **board, int n);
int		backtrack(int **board, int *borders, int rec_depth, int n);

/*
void	init_board(int **board)
{
	board[0][0] = 1;
	board[0][1] = 2;
	board[0][2] = 3;
	board[0][3] = 4;
	board[1][0] = 2;
	board[1][1] = 3;
	board[1][2] = 4;
	board[1][3] = 1;
	board[2][0] = 3;
	board[2][1] = 4;
	board[2][2] = 1;
	board[2][3] = 2;
	board[3][0] = 4;
	board[3][1] = 1;
	board[3][2] = 2;
	board[3][3] = 3;
	board[3][3] = 3;
}
*/

int	main(int argc, char **argv)
{
	int	n;
	int	borders[] = {7,2,1,2,4,3,2,1,2,3,2,3,3,5,3,6,3,2,3,2,1,3,1,2,3,2,3,5};
	int	**board;

	n = 7;
	// borders = malloc(n * 4 * 4);
	board = alloc_mem(n);
	//if (!handle_input(argc, argv, borders, n))
		//return (put_error(1));
	if (!backtrack(board, borders, 0, n))
		return (put_error(2));
	else
		print_board(board, n);
	free_mem(borders, board, n);
	return (0);
}
