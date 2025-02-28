//
// Created by erkam on 2/27/25.
//

#include <stdio.h>
int main(void)
{
    char chess_board[8][8];

    int row_size = sizeof(chess_board) / sizeof(chess_board[0]);
    int column_size = sizeof(chess_board[0]) / sizeof(chess_board[0][0]);

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
            chess_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
    }


    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
            printf("%c ", chess_board[i][j]);

        printf("\n");
    }
}