//
// Created by erkam on 3/14/25.
//

// Solution
//  While macro is `DOUBLE(x) 2*x`;
//      Value of DOUBLE(1+2) is 4.
//      Value of 4/DOUBLE(2) is 4.

#define WRONG_DOUBLE(x) 2 * x
#define DOUBLE(y) ((2) * (y))

#include <stdio.h>
int main(void)
{
    printf("Wrong value of DOUBLE(1+2): %d.\n", WRONG_DOUBLE(1+2));
    printf("Correct value of DOUBLE(1+2): %d.\n", DOUBLE(1+2));
    printf("\nWrong value of 4/DOUBLE(2): %d.\n", 4/WRONG_DOUBLE(2));
    printf("Correct value of 4/DOUBLE(2): %d.\n", 4/DOUBLE(2));
}