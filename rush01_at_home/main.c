#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int backtrack(int **board, int *borders, int rec_depth, int n);
void initialise_board(int **board, int n);
void print_board(int **board, int n);

int main(void)
{
    // printf("\n\n****************************************************************************************new beginning**************************\n\n");

    int n = 4;
    int **board = malloc(n * 8);
    int i = -1;
    while (++i < n)
        board[i] = malloc(n * 4);

    initialise_board(board, n);
	int borders[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	// int borders[] = {1,3,3,2,3,2,1,3,1,4,2,3,2,1,2,5};
	// int borders[] = {4,3,2,4,1,3,1,3,3,3,3,2,4,3,2,4,2,1,2,2,3,3,1,2};
	// int borders[] = {3,4,3,2,3,1,2,1,2,2,3,3,4,5,3,7,3,3,3,2,1,2,1,2,3,3,3,4,5};
	// int borders[] = {2,2,1,5,3,2,2,3,1,2,3,2,1,3,2,2,2,4,1,2};
    // printf("before");
    int res = backtrack(board, borders, 0, n);
    // printf("after\n");
	// printf("res = %d \n", res); 
	if (res)
			print_board(board, n);    
	else
		printf("Error\n");
    return (0);
}


