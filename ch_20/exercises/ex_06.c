//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short i;
    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &i);

    printf("Number with bytes swapped: %hx\n", swap_bytes(i));
}

unsigned short swap_bytes(unsigned short i)
{
    // a.
    unsigned short high = i << 8;
    unsigned short low  = i >> 8;
    return high | low;

    // b.
    return (i << 8) | (i >> 8);
}
