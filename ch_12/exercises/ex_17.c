//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

#define N 4

int sum_two_dimensional_array(const int* a, int n);

int main(void)
{
    int  a[N][N] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int* a_ptr   = &a[0][0];
    int  n       = sizeof(a) / sizeof(a[0][0]);

    printf("Sum of a is %d\n", sum_two_dimensional_array(a_ptr, n));
}

int sum_two_dimensional_array(const int* a, int n)
{
    int sum = 0;

    while (n-- > 0)
        sum += *a++;

    return sum;
}
