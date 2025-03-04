//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

#define N 3

void quicksort(int a[], int* low, int* high);
int* split(int* low, int* high);

int main(void)
{
    int  a[N], i;
    int* a_last_index_ptr = a + N - 1;
    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, a, a_last_index_ptr);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int a[], int* low, int* high)
{
    int* middle;

    if (low >= high)
        return;
    middle = split(low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int* split(int* low, int* high)
{
    int part_element = *low;

    for (;;)
    {
        while (low < high && part_element <= *high)
            high--;
        if (low >= high)
            break;
        *low++ = *high;

        while (low < high && *low <= part_element)
            low++;
        if (low >= high)
            break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}
