//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    printf("The reversal is: %d%d%d\n", number % 10, number % 100 / 10, number / 100);
}
