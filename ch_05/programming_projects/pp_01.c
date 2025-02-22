//
// Created by erkam on 2/19/25.
//


#include <stdio.h>
int main(void)
{
    int num, digit_count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10)
        digit_count = 1;
    else if (num < 100)
        digit_count = 2;
    else if (num < 1000)
        digit_count = 3;
    else if (num < 10000)
        digit_count = 4;
    else if (num < 100000)
        digit_count = 5;
    else if (num < 1000000)
        digit_count = 6;
    else if (num < 10000000)
        digit_count = 7;
    else if (num < 100000000)
        digit_count = 8;
    else if (num < 1000000000)
        digit_count = 9;

    printf("The number %d has %d digits.\n", num, digit_count);
}