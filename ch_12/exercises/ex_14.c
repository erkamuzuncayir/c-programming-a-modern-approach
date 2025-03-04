//
// Created by erkam on 3/4/25.
//

#include <stdbool.h>
#include <stdio.h>

bool search(const int* a, int n, int key);

int main(void)
{
    int  temperatures[7][24] = {[3][22] = 32};
    int  key                 = 32;
    int  n = sizeof(temperatures) / sizeof(temperatures[0]) * sizeof(temperatures[0]) / sizeof(temperatures[0][0]);

    bool isContain = search(&temperatures[0][0], n, key);

    if (isContain)
        printf("%d is in temperatures.\n", key);
    else
        printf("%d is not in temperatures.\n", key);
}

bool search(const int* a, int n, const int key)
{
    const int* p = a;
    while (n-- > 0)
    {
        if (*p++ == key)
            return true;
    }

    return false;
}
