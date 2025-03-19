//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <stdlib.h>

int sum(int (*f)(int), int start, int end);
int increment(int num);

int main(void) { printf("Sum of 1 to 5 is: %d\n", sum(increment, 0, 4)); }

int sum(int (*f)(int), int start, int end)
{
    if (end < start)
    {
        printf("Error: end smaller than start in %s!", __FUNCTION__);
        exit(EXIT_FAILURE);
    }

    int sum = 0;
    while (start <= end)
        sum += (*f)(start++);

    return sum;
}

int increment(int num) { return ++num; }