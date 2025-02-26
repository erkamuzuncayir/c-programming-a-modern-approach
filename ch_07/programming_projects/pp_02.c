//
// Created by erkam on 2/26/25.
//

#include <stdio.h>

int main(void)
{
    int i, n, count = 0;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // Dispose first new-line.
    getchar();

    for (i = 1, count = 0; i <= n; i++, count++)
    {
        if (count > 23)
        {
            printf("Press Enter to continue");
            getchar();
            count = 0;
        }
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
