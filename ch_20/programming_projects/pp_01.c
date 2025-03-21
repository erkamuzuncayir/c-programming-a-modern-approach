//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

union my_union
{
    struct
    {
        unsigned int fraction : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } fake_float;
    float real_float;
};

int main(void)
{
    union my_union u;
    u.fake_float.sign     = 1;
    u.fake_float.exponent = 128,
    u.fake_float.fraction = 0;

    printf("%f", u.real_float);
}
