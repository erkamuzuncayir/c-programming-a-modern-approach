//
// Created by erkam on 2/27/25.
//

#define MAX 40
#include <stdio.h>
int main(void)
{
    int fib_numbers[MAX] = {0, 1};

    for (int i = 2; i < MAX; i++)
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
}