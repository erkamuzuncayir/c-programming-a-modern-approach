//
// Created by erkam on 3/3/25.
//

#include <stdio.h>

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
}

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator)
{
    int m = numerator;
    int n = denominator;
    int temp;

    while (n != 0)
    {
        temp = m % n;
        m    = n;
        n    = temp;
    }

    *reduced_numerator   = numerator / m;
    *reduced_denominator = denominator / m;
}
