//
// Created by erkam on 3/26/25.
//

#include <math.h>
#include <stdio.h>
double evaluate_polynomial(double a[], int n, double x);
int    main(void)
{
    double a[] = {3.0, 2.0, -5.0, -1.0, 7.0, -6};
    int    n = 5, x = 2;
    printf("Evaluation of 3x5 + 2x4 – 5x3 – x2 + 7x – 6, x for 1 is: %f\n", evaluate_polynomial(a, n, x));
}

double evaluate_polynomial(double a[], int n, double x)
{
    double sum = a[0];
    for (int i = 1; i <= n; i++)
        sum = fma(sum, x, a[i]);

    return sum;
}
