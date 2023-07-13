void initialise_board(int **board, int n)
{
    int i = -1;
    int j = -1;
    while (++i < n)
    {
        while (++j < n)
        {
            board[i][j] = 0;
        }
        j = -1;
    }
}
