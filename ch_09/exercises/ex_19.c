//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

void pb(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    pb(n);
}

// Solution: It prints binary representation of given argument.
void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
