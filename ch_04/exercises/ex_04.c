//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

// Compiled with those arguments `-Wall -W -pedantic -ansi -std=c99`
int main(void)
{
    // (a)
    printf("%d\n", 8 / 5); // 1
    // (b)
    printf("%d\n", -8 / 5); // -1
    // (c)
    printf("%d\n", 8 / -5); // -1
    // (d)
    printf("%d\n", -8 / -5); // 1
}