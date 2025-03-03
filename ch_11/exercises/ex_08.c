//
// Created by erkam on 3/3/25.
//

#include <stdio.h>
int* find_largest(int a[], int n);

int main(void)
{
    int  a[]     = {2, 5, 2, 4, 3};
    int* largest = find_largest(a, 5);
    printf("Largest: %d\n", *largest);
}

int* find_largest(int a[], int n)
{
    int  largest     = a[0];
    int* largest_ptr = &largest;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    return largest_ptr;
}
