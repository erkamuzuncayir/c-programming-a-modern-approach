//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    double n, sum = 0.0f;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0.0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.3f\n", sum);

    return 0;
}
