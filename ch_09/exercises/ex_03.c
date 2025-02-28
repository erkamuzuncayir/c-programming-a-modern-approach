//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int gcd(int, int);

int main(void)
{
    int m, n;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    printf("%d is greatest common divisor of %d and %d", gcd(m, n), m, n);
}

int gcd(int m, int n)
{
    int temp;

    while (n != 0)
    {
        temp = m % n;
        m    = n;
        n    = temp;
    }

    return m;
}
