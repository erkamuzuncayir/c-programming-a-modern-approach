//
// Created by erkam on 3/21/25.
//

#include <stdio.h>
int main(void)
{
    int i = 15;
    i = i ^ 0x8;
    printf("%d %x", i, i);
}