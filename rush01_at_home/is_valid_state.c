#include <stdio.h>

int check_unique_row(int **board, int *borders, int *pos, int n);
int check_unique_col(int **board, int *borders, int *pos, int n);
int check_view(int **board, int *borders, int *pos, int n);
int calc_num_seen_row(int **board, int *pos, int n, int from_left_right);
int calc_num_seen_col(int **board, int *pos, int n, int from_top_bottom);
int check_view_col(int **board, int *borders, int *pos, int n);
int check_view_row(int **board, int *borders, int *pos, int n);

int is_valid_state(int **board, int *borders, int *pos, int n)
{
    int row_check = check_unique_row(board, borders, pos, n);
    int col_check = check_unique_col(board, borders, pos, n);
    int view_check = check_view(board, borders, pos, n);
    if (row_check && col_check && view_check)
        return (1);
    return (0);
}

int check_unique_row(int **board, int *borders, int *pos, int n)
{
    int y = pos[0];
    int x = pos[1];
    int board_val = board[y][x];
    int i = -1;
    while (++i < x)
    {
        if (board[y][i] == board_val)
        {
            return (0);
        }
    }
    return (1);
}

int check_unique_col(int **board, int *borders, int *pos, int n)
{
    int y = pos[0];
    int x = pos[1];
    int board_val = board[y][x];
    int i = -1;
    while (++i < y)
    {
        if (board[i][x] == board_val)
        {
            return (0);
        }
    }
    return (1);
}

int check_view(int **board, int *borders, int *pos, int n)
{
    int y = pos[0];
    int x = pos[1];
    int check_row = 1;
    int check_col = 1;

	if(x % n == n - 1)
 	{
    	 check_row = check_view_row(board, borders, pos, n);
 	}
 	if(y % n == n - 1)
 	{
    	 check_col = check_view_col(board, borders, pos, n);
 	}
 	if (!check_col || !check_row)
	{
    	return 0;
	}
	return 1;
}

int check_view_row(int **board, int *borders, int *pos, int n)
{
    int y = pos[0];
    int x = pos[1];
    int bord_val_left = borders[y % n + 2 * n];
    int bord_val_right = borders[y % n + 3 * n]; 
    int res_left_right = calc_num_seen_row(board, pos, n, 1);
    int res_right_left = calc_num_seen_row(board, pos, n, -1);
	if (bord_val_left == res_left_right && bord_val_right == res_right_left)
		return 1;
	return 0;
}

int check_view_col(int **board, int *borders, int *pos, int n)
{
    int y = pos[0];
    int x = pos[1];
    int bord_val_top = borders[x % n];
    int bord_val_bott = borders[x % n + n];	
    int res_top_bott = calc_num_seen_col(board, pos, n, 1);
    int res_bott_top = calc_num_seen_col(board, pos, n, -1);	
	if (bord_val_top == res_top_bott && bord_val_bott == res_bott_top)
		return 1;
	return 0;
}

int calc_num_seen_row(int **board, int *pos, int n, int from_left_right)
{
    int y = pos[0];
    int num_seen = 0;
    int i;
    int max = 0;
    if (from_left_right == 1)
    {
        i = -1;
        while (++i < n)
        {
            if (board[y][i] > max)
            {
                num_seen += 1;
                max = board[y][i];
            }
        }
    }
    if (from_left_right == -1)
    {
        i = n;
        while (--i >= 0)
        {
            if (board[y][i] > max)
            {
                num_seen += 1;
                max = board[y][i];
            }
        }
    }
    return num_seen;
}

int calc_num_seen_col(int **board, int *pos, int n, int from_top_bottom)
{
    int x = pos[1];
    int num_seen = 0;
    int i;
    int max = 0;
    if (from_top_bottom == 1)
    {
        i = -1;
        while (++i < n)
        {
            if (board[i][x] > max)
            {
                num_seen += 1;
                max = board[i][x];
            }
        }
    }
    if (from_top_bottom == -1)
    {
        i = n;
        while (--i >= 0)
        {
            if (board[i][x] > max)
            {
                num_seen += 1;
                max = board[i][x];
            }
        }
    }
    return num_seen;
}
