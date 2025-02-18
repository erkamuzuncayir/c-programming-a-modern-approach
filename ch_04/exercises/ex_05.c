//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

// Compiled with those arguments `-Wall -W -pedantic -ansi -std=c89`
int main(void)
{
    // (a)
    printf("%d\n", 8 % 5); // 3
    // (b)
    printf("%d\n", -8 % 5); // -3 or 2
    // (c)
    printf("%d\n", 8 % -5); // -3 or 2
    // (d)
    printf("%d\n", -8 % -5); // -3 or 2
}