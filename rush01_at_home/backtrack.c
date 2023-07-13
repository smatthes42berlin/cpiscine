#include <stdio.h>

int is_valid_state(int **board, int *borders, int *pos, int n);
void get_cur_pos(int **board, int *pos, int n);
void print_board(int **board, int n);

int backtrack(int **board, int *borders, int rec_depth, int n)
{
    int pos[2];
    get_cur_pos(board, pos, n);
    int y = pos[0];
    int x = pos[1];
    if (rec_depth == n * n)
    {
        return (1);
    }
    int counter = 0;
    while (++counter < n + 1)
    {
        board[y][x] = counter; 
		print_board(board, n);
        if (is_valid_state(board, borders, pos, n) == 1)
            if (backtrack(board, borders, rec_depth + 1, n) == 1)
                return (1);
		board[y][x] = 0;
    }
    return (0);
}
