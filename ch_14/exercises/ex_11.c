//
// Created by erkam on 3/15/25.
//

#include <stdio.h>

#define ERROR(s, ...) fprintf(stderr, (s), __VA_ARGS__)

int main(void)
{
    int index = 0;
    ERROR("Range error: index = %d\n", index);
}
