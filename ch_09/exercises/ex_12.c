//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
double inner_product(double[], double[], int);

int main(void)
{
    double a[] = {1.5, 2.5, 3.5};
    double b[] = {-1.5, 2.5, 3.5};
    int    n   = sizeof(a) / sizeof(a[0]);

    printf("Inner product of a and b is %.2f", inner_product(a, b, n));
}

double inner_product(double a[], double b[], int n)
{
    double product = 0.0;
    for (int i = 0; i < n; i++)
        product += a[i] * b[i];

    return product;
}
