//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    printf("Size of int: %zu bytes (%zu bits).\n", sizeof(int), sizeof(int) * 8);
    printf("Size of short: %zu bytes (%zu bits).\n", sizeof(short), sizeof(short) * 8);
    printf("Size of long: %zu bytes (%zu bits).\n", sizeof(long), sizeof(long) * 8);
    printf("Size of float: %zu bytes (%zu bits).\n", sizeof(float), sizeof(float) * 8);
    printf("Size of double: %zu bytes (%zu bits).\n", sizeof(double), sizeof(double) * 8);
    printf("Size of long double: %zu bytes (%zu bits).\n", sizeof(long double), sizeof(long double) * 8);
}