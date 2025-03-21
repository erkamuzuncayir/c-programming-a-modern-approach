//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

#define BYTE 8

unsigned int reverse_bits(unsigned int n);
void         print_binary(unsigned int n);

int main(void)
{
    unsigned int i = 0xAAAAAAAA;
    print_binary(i);
    print_binary(reverse_bits(i));
}

unsigned int reverse_bits(unsigned int n)
{
    unsigned int bit_count = sizeof(unsigned int) * BYTE;
    unsigned int reverse_n = 0;
    while (bit_count)
    {
        unsigned int bit = (n >> (bit_count - 1)) & 1;
        reverse_n |= bit << (sizeof(unsigned int) * BYTE - bit_count);
        bit_count--;
    }
    return reverse_n;
}

void print_binary(unsigned int n)
{
    for (int i = sizeof(unsigned int) - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}
