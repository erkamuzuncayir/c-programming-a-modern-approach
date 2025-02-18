//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;

    // (a)
    i += j;
    printf("i = %d, j = %d\n", i, j); // 3 2
    // (b)
    i--;
    printf("i = %d, j = %d\n", i, j); // 2 2
    // (c)
    i * j / i;
    printf("i = %d, j = %d\n", i, j); // 2 2
    // (d)
    i % ++j;
    printf("i = %d, j = %d\n", i, j); // 2 3
}
