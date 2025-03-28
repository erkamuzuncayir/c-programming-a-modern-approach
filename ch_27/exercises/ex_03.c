//
// Created by erkam on 3/28/25.
//

#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int8_t i8 = 42;
    printf("%" PRIdLEAST8 "\n", i8);
    int32_t i32 = 123456;
    printf("%" PRIdLEAST32 "\n", i32);
    uint16_t u16 = 0777;
    printf("%" PRIoLEAST16 "\n", u16);
    uint64_t u64 = 0xabcdef1234567890;
    printf("%" PRIxLEAST64 "\n", u64);
}
