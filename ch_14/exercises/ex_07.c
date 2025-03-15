//
// Created by erkam on 3/15/25.
//

#include <stdio.h>

// Solution
// a.
// printf("Max of the %ld and %ld is: \n", 5, 3, long long_max(long x, long y)
// {
//     return x > y ? x : y;
// }
//
// b. Because it made from two words and this prevents creating desired function name.
//
// c. using with a type definition, like unsigned_long


#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
return x > y ? x : y;       \
}

typedef unsigned long unsigned_long;

int main(void)
{
    printf("Max of the %ld and %ld is: \n", 5, 3, GENERIC_MAX(unsigned_long));
}