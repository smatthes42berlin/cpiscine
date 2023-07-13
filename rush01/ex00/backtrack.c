/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:17:53 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/26 23:18:40 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_state(int **board, int *borders, int *pos, int n);
void	get_cur_pos(int **board, int *pos, int n);
void	print_board(int **board, int n);

int	backtrack(int **board, int *borders, int rec_depth, int n)
{
	int	pos[2];
	int	y;
	int	x;
	int	counter;

	get_cur_pos(board, pos, n);
	y = pos[0];
	x = pos[1];
	if (rec_depth == n * n)
	{
		return (1);
	}
	counter = 0;
	while (++counter < n + 1)
	{
		board[y][x] = counter;
		if (is_valid_state(board, borders, pos, n) == 1)
			if (backtrack(board, borders, rec_depth + 1, n) == 1)
				return (1);
		board[y][x] = 0;
	}
	return (0);
}
