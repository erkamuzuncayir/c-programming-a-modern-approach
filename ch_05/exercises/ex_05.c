//
// Created by erkam on 2/19/25.
//

// Solution: It is legal, but it can't result correct answer.

#include <stdio.h>

int main(void)
{
    int n = 0;

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    // Correct one
    if (n >= 1 && n <= 10)
        printf("n is between 1 and 10\n");
}