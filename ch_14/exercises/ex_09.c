//
// Created by erkam on 3/15/25.
//

#define CHECK(x, y, n) (((x) <= (n) - 1) ? ((y) <= (n) - 1 ? 1 : 0) : 0)
#define MEDIAN(x, y, z) (((x) > (y)) ? (((y) > (z)) ? (y) : ((x) > (z)) ? (z) : (x)) : (((x) > (z)) ? (x) : ((y) > (z)) ? (z) : (y)))
#define POLYNOMIAL(x) ((((3 * (x) + 2) * (x) - 5) * (x) - 1) * (x) + 7) * (x) - 6
#include <stdio.h>

int main(void)
{
    printf("Check: %d.\nMedian of %d, %d and %d is: %d.\nPolynomial result for %d: %d.\n", CHECK(3, 5, 7), 5, 6, 7,
           MEDIAN(5, 6, 7), 3, POLYNOMIAL(3));
}
