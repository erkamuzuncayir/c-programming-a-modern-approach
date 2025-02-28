//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
double median(double, double, double);

int main(void)
{
    double x = 3.5, y = 3.0, z = 4.0;
    printf("Median of %.2f, %.2f, %.2f is %.2f", x, y, z, median(x, y, z));
}

double median(double x, double y, double z)
{
    double median = x;
    if (median > y)
    {
        if (median > z)
        {
            if (z > y)
                median = z;
            else
                median = y;
        }
    }
    else
    {
        if (median < z)
        {
            if (z < y)
                median = z;
            else
                median = y;
        }
    }

    return median;
}
