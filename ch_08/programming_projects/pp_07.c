//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#define ROW_COUNT 5
#define COL_COUNT 5

int main(void)
{
    int numbers[ROW_COUNT][COL_COUNT];

    for (int i = 0; i < ROW_COUNT; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < COL_COUNT; j++)
            scanf("%d", &numbers[i][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < ROW_COUNT; i++)
    {
        int row_total = 0;
        for (int j = 0; j < COL_COUNT; j++)
            row_total += numbers[i][j];

        printf("%d ", row_total);
    }

    printf("\n");

    printf("Column totals: ");
    for (int j = 0; j < COL_COUNT; j++)
    {
        int column_total = 0;
        for (int i = 0; i < ROW_COUNT; i++)
            column_total += numbers[i][j];

        printf("%d ", column_total);
    }

    printf("\n");
}
