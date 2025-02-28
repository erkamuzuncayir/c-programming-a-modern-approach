//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

int evaluate_polynomial(int);

int main(void)
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("For x = %d, result of '3x5 + 2x4 – 5x3 – x2 + 7x – 6' is: %d", x, evaluate_polynomial(x));
}

int evaluate_polynomial(int x)
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}
