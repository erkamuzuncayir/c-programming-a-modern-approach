//
// Created by erkam on 2/28/25.
//

#include "stdio.h"

void create_magic_square(int n, int[n][n]);
void print_magic_square(int n, int[n][n]);

int main(void)
{
    int size;

    printf("This program creates a magic square of a specified size.\n"
           "The size must be an odd number between 1 and 99.\n"
           "Enter size of magic square: ");
    scanf("%d", &size);

    int magic_square[size][size];

    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
}

void create_magic_square(int n, int magic_square[n][n])
{
    int row, col, next_row, next_col;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
            magic_square[row][col] = 0;
    }

    row = 0;
    col = n / 2;
    for (int num = 1; num <= n * n; num++)
    {
        magic_square[row][col] = num;

        next_row = (row - 1 < 0) ? n - 1 : row - 1;
        next_col = col == n - 1 ? 0 : col + 1;

        if (magic_square[next_row][next_col] != 0)
            row = (row + 1 == n) ? 0 : row + 1;
        else
        {
            row = next_row;
            col = next_col;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
            printf("%d\t", magic_square[row][col]);

        printf("\n");
    }
}
