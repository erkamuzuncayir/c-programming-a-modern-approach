//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    typedef char Int8;
    typedef short Int16;
    typedef int Int32;

    printf("Size of int8: %zu byte (%zu bits).\n", sizeof(Int8), sizeof(Int8) * 8);
    printf("Size of int16: %zu bytes (%zu bits).\n", sizeof(Int16), sizeof(Int16) * 8);
    printf("Size of int32: %zu bytes (%zu bits).\n", sizeof(Int32), sizeof(Int32) * 8);
}