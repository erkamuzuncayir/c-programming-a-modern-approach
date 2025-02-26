//
// Created by erkam on 2/26/25.
//

#include <stdio.h>

// Solution
// Short is 16 bits.
// Integer is 32 bits.
// Long is 64 bits.


int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d %d\n", i, i * i);

    return 0;
}
