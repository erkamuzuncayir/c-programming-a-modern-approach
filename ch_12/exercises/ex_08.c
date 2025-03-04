//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

void store_zeros(int a[], int n);

int main(void)
{
    int  a[]   = {1, 2, 3, 4, 5};
    int* a_ptr = a;
    int  n     = sizeof(a) / sizeof(a[0]);
    store_zeros(a, n);

    while (n-- > 0)
        printf("%d ", *a_ptr++);
}

void store_zeros(int a[], int n)
{
    int* p = a;
    while (n-- > 0)
        *p++ = 0;
}
