//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

unsigned short create_short(unsigned char high_byte, unsigned char low_byte);

// Solution:
// Problem again precedence, bitwise operators' precedence lower than arithmetical operators.

int main(void)
{
    unsigned char high = 0xAA;
    unsigned char low  = 0x0A;

    printf("%hx", create_short(high, low));
}

unsigned short create_short(unsigned char high_byte, unsigned char low_byte) { return (high_byte << 8) + low_byte; }
