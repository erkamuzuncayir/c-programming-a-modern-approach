//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

#define N 3

void max_min(int a[], int n, int* max, int* min);

int main(void)
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int* max, int* min)
{
    int* a_ptr = a;

    *max = *min = *a_ptr;
    while (n-- > 0)
    {
        if (*a_ptr > *max)
            *max = *a_ptr;
        else if (*a_ptr < *min)
            *min = *a_ptr;

        a_ptr++;
    }
}
