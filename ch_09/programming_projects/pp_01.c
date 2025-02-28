//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
void selection_sort(int[], int);

int main(void)
{
    int nums[] = {3, 4, 2, 1};
    int n      = 4;

    selection_sort(nums, n);

    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
}

void selection_sort(int nums[], int n)
{
    int largest_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[largest_index])
            largest_index = i;
    }

    int largest         = nums[largest_index];
    nums[largest_index] = nums[n - 1];
    nums[n - 1]         = largest;

    if (n > 1)
        selection_sort(nums, --n);
}
