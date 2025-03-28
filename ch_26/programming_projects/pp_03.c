//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 100000

int compare_ints(const void* p, const void* q);

int main(void)
{
    int nums[LENGTH];
    for (int i = 0; i < LENGTH - 1; i++)
        nums[i] = LENGTH - i - 1;

    clock_t start = clock();
    qsort(nums, LENGTH, sizeof(int), compare_ints);
    printf("Sorting %d LENGTH reversed array take this much time: %f", LENGTH,
           ((clock() - start) / (double)(CLOCKS_PER_SEC)));
}

int compare_ints(const void* p, const void* q) { return *(int*)p - *(int*)q; }
