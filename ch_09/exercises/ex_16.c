//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

int fact(int, int);

int main(void)
{
    int i = 6;

    printf("Factorial of %d: %d", i, fact(i, i));
}

int fact(int n, int i)
{
    if (i > 1)
    {
        n *= --i;
        return fact(n, i);
    }

    return n;
}
