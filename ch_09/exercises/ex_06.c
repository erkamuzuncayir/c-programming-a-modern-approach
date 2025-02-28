//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int digit(int, int);

int main(void)
{
    int num = 822342349, digit_index = 9;
    printf("%d is the %d. digit of %d", digit(num, digit_index), digit_index, num);
}

int digit(int num, int digit_index)
{
    for (int i = 1; i < digit_index; i++)
        num /= 10;

    return num % 10;
}
