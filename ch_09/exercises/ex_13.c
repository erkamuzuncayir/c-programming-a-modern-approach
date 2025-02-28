//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int evaluate_position(char[8][8]);

int main(void)
{
    char chess_board[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

    printf("Evaluated board value is %d", evaluate_position(chess_board));
}

int evaluate_position(char board[8][8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
                case 'Q':
                    sum += 9;
                    break;
                case 'R':
                    sum += 5;
                    break;
                case 'B':
                    sum += 3;
                    break;
                case 'P':
                    sum += 1;
                    break;
                case 'q':
                    sum -= 9;
                    break;
                case 'r':
                    sum -= 5;
                    break;
                case 'b':
                    sum -= 3;
                    break;
                case 'p':
                    sum -= 1;
                    break;
            }
        }
    }

    return sum;
}
