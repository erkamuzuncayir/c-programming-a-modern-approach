//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int m = 6, n = 30;
    printf("%d is greatest common divisor of %d and %d", gcd(m, n), m, n);
}

int gcd(int m, int n)
{
    return n == 0 ? m : gcd(n, m % n);
}
