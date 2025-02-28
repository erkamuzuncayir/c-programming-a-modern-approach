//
// Created by erkam on 2/28/25.
//

#include <stdbool.h>

bool has_zero(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;

    // It should move this return statement out of for loop.
    // If it's not return true so far, it must return false.
    return false;
}
