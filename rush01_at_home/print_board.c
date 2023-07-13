#include <stdio.h>

void print_board(int **board, int n)
{
    int j = -1;
    int k = -1;

    while (++j < n)
    {
        while (++k < n)
        {
            printf("%d ", board[j][k]);
        }
        printf("\n");
        k = -1;
    }
	printf("\n");
}
