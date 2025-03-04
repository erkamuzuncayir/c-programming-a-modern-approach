//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

void find_two_largest(const int* a, int n, int* largest_ptr, int* second_largest_ptr);

int main(void)
{
    int  a[]     = {1, 2, 3, 4, 5};
    int* a_ptr   = a;
    int  n       = sizeof(a) / sizeof(a[0]);
    int  largest = 0, second_largest = 0;

    find_two_largest(a_ptr, n, &largest, &second_largest);

    printf("Largest: %d, second largest: %d\n", largest, second_largest);
}

void find_two_largest(const int* a, int n, int* largest_ptr, int* second_largest_ptr)
{
    *largest_ptr = *second_largest_ptr = *a;

    while (n-- > 0)
    {
        if (*a > *largest_ptr)
        {
            *second_largest_ptr = *largest_ptr;
            *largest_ptr        = *a;
        }
        else if (*a > *second_largest_ptr)
            *second_largest_ptr = *a;

        a++;
    }
}
