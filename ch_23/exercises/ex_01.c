//
// Created by erkam on 3/26/25.
//

#include <math.h>
#include <stdio.h>

double round_nearest(double x, int n);
int    main(void) { printf("%f rounded by %d: %f\n", 3.14159, 3, round_nearest(3.14159, 3)); }

double round_nearest(double x, int n)
{
    return x < 0.0 ? ceil(x * pow(10.0, n) - 0.5) / pow(10.0, n) : floor(x * pow(10.0, n) + 0.5) / pow(10.0, n);
}
