//
// Created by erkam on 2/24/25.
//

#include <stdio.h>

int main(void)
{
    int number = -1;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");

    while (number != 0)
    {
        printf("%d", number % 10);
        number /= 10;
    }
}
