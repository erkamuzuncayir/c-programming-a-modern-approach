//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

int evaluate_position(char* board_ptr, int n);

int main(void)
{
    char  chess_board[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                               {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'},
                               {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'},
                               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    char* chess_board_ptr   = &chess_board[0][0];
    int   n                 = sizeof(chess_board) / sizeof(chess_board[0][0]);
    printf("Evaluated board value is %d", evaluate_position(chess_board_ptr, n));
}

int evaluate_position(char* board_ptr, int n)
{
    int sum = 0;

    while (n-- > 0)
    {
        switch (*board_ptr++)
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

    return sum;
}
