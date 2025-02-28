//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int power(int, int);

int main(void)
{
    int num = 2, pow = 7;
    printf("%d ^ %d is: %d\n", num, pow, power(num, pow));
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return x * power(x, n - 1);
}
