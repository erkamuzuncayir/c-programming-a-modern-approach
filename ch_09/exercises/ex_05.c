//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int num_digits(int);

int main(void)
{
    int num = 32344233;
    printf("%d has %d amount of digit(s).", num, num_digits(num));
}

int num_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count;
}
