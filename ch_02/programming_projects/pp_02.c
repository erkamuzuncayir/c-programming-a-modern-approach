//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    float pi = 3.14f;
    float multiplier = 4.0f/3.0f; // 4/3, truncates fraction and result wrong value.
    int radius = 5;

    float volume = multiplier * pi * radius * radius * radius;

    printf("Volume of sphere with radius %d is: %.2f\n", radius, volume);
}
