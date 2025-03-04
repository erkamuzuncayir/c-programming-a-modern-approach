//
// Created by erkam on 3/4/25.
//

#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int  a[]       = {1, 2, 3, 4, 5};
    int  key       = 4;
    int n = sizeof(a) / sizeof(a[0]);
    bool isContain = search(a, n, key);
    if (isContain)
        printf("%d is in a.\n", key);
    else
        printf("%d is not in a.\n", key);
}

bool search(const int a[], int n, const int key)
{
    const int* p = a;
    while (n-- > 0)
    {
        if (*p++ == key)
            return true;
    }

    return false;
}
