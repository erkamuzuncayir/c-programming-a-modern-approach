//
// Created by erkam on 3/27/25.
//

#include <stdarg.h>

/* n must be at least 1. One of the parameter has to be 0.*/
int max_int(int n, ...)
{
    va_list ap;
    int     current, largest;

    largest = n;
    va_start(ap, n);
    while ((current = va_arg(ap, int)) != 0)
    {
        if (current > largest)
            largest = current;
    }

    va_end(ap);
    return largest;
}
