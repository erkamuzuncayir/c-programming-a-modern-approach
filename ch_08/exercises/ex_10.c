//
// Created by erkam on 2/27/25.
//

#include <stdio.h>

int main(void)
{
    char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                              {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                              {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                              {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    int row_size = sizeof(chess_board) / sizeof(chess_board[0]);
    int column_size = sizeof(chess_board[0]) / sizeof(chess_board[0][0]);

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
            printf("%c ", chess_board[i][j]);

        printf("\n");
    }
}