//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }

    printf("Greatest common divisor: %d", m);
}w