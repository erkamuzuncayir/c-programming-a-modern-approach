//
// Created by erkam on 3/20/25.
//

#include <stdio.h>
int main(void)
{
    int i = 8;
    int j = 9;
    printf("%d\n", i >> (1 + j) >> 1); // 0
    i = 1;
    printf("%d\n", i & ~i); // 0
    i = 2; j = 1;
    int k = 0;
    printf("%d\n", (~i & j) ^ k); // 1
    i = 7; j = 8; k = 9;
    printf("%d\n", i ^ (j & k)); // 15
}
