//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

#define BYTE 8

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
    unsigned int n = 0x12345678;
    printf("%x\n", n);
    printf("Rotate left by 4 to %x: %x\n", n, (rotate_left(n, 4)));
    printf("Rotate left by 4 to %x: %x\n", n, (rotate_right(n, 4)));
}

unsigned int rotate_left(unsigned int i, int n) { return i << n | (i >> (BYTE - n)); }
unsigned int rotate_right(unsigned int i, int n) { return i >> n | (i << (BYTE - n)); }
