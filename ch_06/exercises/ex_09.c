//
// Created by erkam on 2/22/25.
//

#include <stdio.h>
int main(void)
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d ", i++);
        i/= 2;
    }
}