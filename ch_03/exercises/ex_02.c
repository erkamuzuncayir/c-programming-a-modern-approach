//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Enter a value: ");
    scanf("%f", &x);

    printf("%-8.1e\n", x); // (a)
    printf("%10.6e\n", x); // (b)
    printf("%-8.3f\n", x); // (c)
    printf("%6.0f\n", x); // (d)
}
