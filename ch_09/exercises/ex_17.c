//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

int fact(int);

int main(void)
{
    int n = 6;

    printf("Factorial of %d: %d", n, fact(n));
}

int fact(int n)
{
    int sum = 1;
    while (n > 1)
        sum *= n--;

    return sum;
}
