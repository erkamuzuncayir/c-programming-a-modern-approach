//
// Created by erkam on 3/14/25.
//

#define WRONG_AVG(x,y) (x+y)/2
#define AVG(x,y) (((x)+(y))/2)
#define WRONG_AREA(x, y) (x) * (y)
#define AREA(x, y) ((x) * (y))
#include <stdio.h>

int main(void)
{
    printf("Problematic line for macro `AVG(x,y) (x+y)/2` may `4 %% AVG(5, 1)`.\nResult has to be %d instead of %d.", 4 % AVG(5,1), 4 % WRONG_AVG(5,1));
    printf("\nProblematic line for macro `AREA(x, y) (x) * (y)` may `3 %% AREA(3, 5)`.\nResult has to be %d instead of %d.", 3 % AREA(3,5), 3 % WRONG_AREA(3,5));
}