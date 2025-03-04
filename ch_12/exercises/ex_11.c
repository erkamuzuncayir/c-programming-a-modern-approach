//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

int* find_largest(int* a, int n);

int main(void)
{
    int  a[]   = {1, 2, 3, 4, 5};
    int* a_ptr = a;
    int  n     = sizeof(a) / sizeof(a[0]);

    printf("Largest: %d\n", *find_largest(a_ptr, n));
}

int* find_largest(int* a, int n)
{
    int  largest     = *a;
    int* largest_ptr = a;

    while (n-- > 0)
    {
        if (*a > largest)
        {
            largest     = *a;
            largest_ptr = a;
        }

        a++;
    }

    return largest_ptr;
}
