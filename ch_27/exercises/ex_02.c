//
// Created by erkam on 3/28/25.
//

#include <stdio.h>

#define INT32_C(n)  n##L
#define UINT32_C(n) n##UL
#define INT64_C(n)  n##LL
#define UINT64_C(n) n##ULL

int main(void)
{
    long i32 = INT32_C(1234567890123456789);
    unsigned long u32 = UINT32_C(12345678901234567890);
    long long i64 = INT64_C(1234567890123456789);
    unsigned long long u64 = UINT64_C(12345678901234567890);

    printf("INT32_C:  %ld\n", i32);
    printf("UINT32_C: %lu\n", u32);
    printf("INT64_C:  %lld\n", i64);
    printf("UINT64_C: %llu\n", u64);

    return 0;
}
