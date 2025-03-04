//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

int* find_largest(int* a, int n);

int main(void)
{
    int  temperatures[7][24] = {[3][22] = 32};
    int* temperatures_ptr    = &temperatures[0][0];
    int  size_of_column      = sizeof(temperatures) / sizeof(temperatures[0]);
    int  size_of_row         = sizeof(temperatures[0]) / sizeof(temperatures[0][0]);

    for (int i = 0; i < size_of_column; i++)
        printf("Largest of %d. row is %d.\n", i + 1, *find_largest(temperatures_ptr + (i * size_of_row), size_of_row));
}

int* find_largest(int* a, int n)
{
    int  largest     = *a;
    int* largest_ptr = a;

    while (n-- > 0)
    {
        if (*a > largest)
        {
            largest     = *a;
            largest_ptr = a;
        }

        a++;
    }

    return largest_ptr;
}
