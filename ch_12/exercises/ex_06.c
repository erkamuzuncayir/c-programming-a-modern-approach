//
// Created by erkam on 3/4/25.
//

#include <stdio.h>
int sum_array(const int* a, int n);

int main(void)
{
    int  a[]   = {1, 2, 3, 4, 5};
    int* a_ptr = a;
    int  n     = sizeof(a) / sizeof(a[0]);
    printf("Sum of a is %d", sum_array(a_ptr, n));
}

int sum_array(const int* a, int n)
{
    int sum = 0;

    while (n-- > 0)
        sum += *a++;

    return sum;
}
