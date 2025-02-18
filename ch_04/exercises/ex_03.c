//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

// Compiled with those arguments `-Wall -W -pedantic -ansi -std=c89`
int main(void)
{
    // (a)
    printf("%d\n", 8 / 5); // 1
    // (b)
    printf("%d\n", -8 / 5); // -1 but can be -2 too.
    // (c)
    printf("%d\n", 8 / -5); // -1 but can be -2 too.
    // (d)
    printf("%d\n", -8 / -5); // 1
}