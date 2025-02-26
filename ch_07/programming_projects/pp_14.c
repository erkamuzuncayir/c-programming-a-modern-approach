//
// Created by erkam on 2/26/25.
//

#include <math.h>
#include <stdio.h>

int main(void)
{
    double num, guess = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &num);

    while (fabs(guess - (guess + num/guess) / 2) > 0.00001)
        guess = (guess + num/guess) / 2;

    printf("Square root: %f", guess);
}
