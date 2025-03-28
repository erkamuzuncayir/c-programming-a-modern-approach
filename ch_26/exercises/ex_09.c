//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    double r_num = (rand() % 11) / 10.0;

    printf("%.1f\n", r_num);
}
