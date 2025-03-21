//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

struct my_float
{
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign: 1;
};

int main(void)
{
    struct my_float test = {.sign = 1, .exponent = 0x22, .fraction = 4194304};
    printf("%x", test);
}