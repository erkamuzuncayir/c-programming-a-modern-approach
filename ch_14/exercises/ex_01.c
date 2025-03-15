//
// Created by erkam on 3/14/25.
//

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER_DIVIDED_BY_FOUR(y) ((y) % 4)
#define PRODUCT_LESS_THAN_A_HUNDRED(i, j) (((i) * (j) < 100) ? 1 : 0)

int main(void)
{
    printf("Cube of %d is %d.\n", 3, CUBE(3));
    printf("\nRemainder of %d when divided by 4 is %d.\n", 27, REMAINDER_DIVIDED_BY_FOUR(27));
    printf("\nIf %d * %d is less than 100, result will be 1, otherwise 0.\nResult is: %d\n", 5, 25, PRODUCT_LESS_THAN_A_HUNDRED(5, 25));
}
