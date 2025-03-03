//
// Created by erkam on 3/3/25.
//

#include <stdio.h>
void find_two_largest(int a[], int n, int* largest, int* second_largest);

int main(void)
{
    int a[] = {2, 5, 2, 4, 3};
    int largest, second_largest;
    find_two_largest(a, 5, &largest, &second_largest);
    printf("Largest: %d, second largest: %d", largest, second_largest);
}


void find_two_largest(int a[], int n, int* largest, int* second_largest)
{
    *largest = *second_largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
            *largest = a[i];
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}
