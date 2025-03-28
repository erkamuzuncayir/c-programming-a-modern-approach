//
// Created by erkam on 3/27/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int n, r_num = rand();
    r_num %= 4;

    switch (r_num)
    {
        case 0:
           n = 7;
        break;
        case 1:
            n = 11;
        break;
        case 2:
            n = 15;
        break;
        case 3:
            n = 19;
        break;
    }

    printf("%d\n", n);
}