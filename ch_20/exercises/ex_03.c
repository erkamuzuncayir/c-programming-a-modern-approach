//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

#define M(x, y) ((x) ^= (y), (y) ^= (x), (x) ^= (y))

// Solution:
// Change bits between x and y.

int main(void)
{
    int x = 2;
    int y = 5;

    // 0 0 1 0
    // 0 1 0 1
    // 0 1 1 1
    // 0 0 1 0
    // 0 1 0 1

    printf("%d %d ", x, y);
    M(x, y);
    printf("%d %d", x, y);
}