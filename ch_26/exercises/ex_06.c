//
// Created by erkam on 3/27/25.
//

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>

char* max_pair(int num_pairs, ...);

int main(void)
{
    printf("%s", max_pair(5, 180, "Seinfeld", 180, "I Love Lucy", 39, "The Honeymooners", 210, "All in the Family", 86,
                          "The Sopranos"));
}

char* max_pair(int num_pairs, ...)
{
    int largest_index = 0, largest_num = INT_MIN, count = 0;

    va_list ap;
    va_start(ap, num_pairs);
    while (count < num_pairs)
    {
        int num = va_arg(ap, int);
        if (largest_num < num)
        {
            largest_num   = num;
            largest_index = count;
        }
        va_arg(ap, char*);
        count++;
    }
    va_end(ap);

    count = 0;
    va_start(ap, num_pairs);
    while (count < largest_index)
    {
        va_arg(ap, int);
        va_arg(ap, char*);
        count++;
    }
    va_arg(ap, int);
    va_end(ap);

    return va_arg(ap, char*);
}
