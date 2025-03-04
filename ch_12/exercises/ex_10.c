//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

int* find_middle(int* a, int n);

int main(void)
{
    int  a[]   = {1, 2, 3, 4, 5};
    int* a_ptr = a;
    int  n     = sizeof(a) / sizeof(a[0]);

    int* middle_ptr = find_middle(a_ptr, n);
    printf("Middle element of a %d\n", *middle_ptr);
}

int* find_middle(int* a, int n) { return a + (n / 2); }
