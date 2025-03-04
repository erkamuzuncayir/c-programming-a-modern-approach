//
// Created by erkam on 3/4/25.
//

#include <stdio.h>
double inner_product(const double* a, const double* b, int n);

int main(void)
{
    double  a[]   = {1.0, 2.0, 3.0, 4.0, 5.0};
    double* a_ptr = a;
    double  b[]   = {-1.0, -2.0, 0.0, -4.0, -5.0};
    double* b_ptr = b;
    int  n     = sizeof(a) / sizeof(a[0]);


    printf("Sum of a and b arrays are %f\n", inner_product(a_ptr, b_ptr, n));
}

double inner_product(const double* a, const double* b, int n)
{
    double sum = 0.0;
    while (n-- > 0)
        sum += *a++ + *b++;

    return sum;
}
