//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int main(void)
{
    int size, row, col, next_row, next_col;

    printf("This program creates a magic square of a specified size.\n"
           "The size must be an odd number between 1 and 99.\n"
           "Enter size of magic square: ");
    scanf("%d", &size);

    int magic_square[size][size];

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
            magic_square[row][col] = 0;
    }

    row = 0;
    col = size / 2;
    for (int num = 1; num <= size * size; num++)
    {
        magic_square[row][col] = num;

        next_row = (row - 1 < 0) ? size - 1 : row - 1;
        next_col = col == size - 1 ? 0 : col + 1;

        if (magic_square[next_row][next_col] != 0)
            row = (row + 1 == size) ? 0 : row + 1;
        else
        {
            row = next_row;
            col = next_col;
        }
    }

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
            printf("%d\t", magic_square[row][col]);

        printf("\n");
    }
}
