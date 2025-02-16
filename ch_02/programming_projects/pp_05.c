//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int x = 0;

    printf("Enter a value: ");
    scanf("%d", &x);

    int result = (3 * x * x * x * x * x) + (2 * x * x * x * x) -
        (5 * x * x * x) - (x * x) + (7 * x) - 6;
    printf("Result is: %d", result);
}
