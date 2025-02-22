//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    int i = -17;
    printf("%d\n", i >= 0 ? i : -i); // 17 for 17. 17 for -17.
}