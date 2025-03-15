//
// Created by erkam on 3/14/25.
//

#include <math.h>
#include <stdio.h>

#define DISP(f, x) ((printf(#f "(%.2f) = %.2f\n", x, (f(x)))));
#define DISP2(f, x, y) ((printf(#f "(%.2f, %.2f) = %.2f\n", x, y, (f((x), (y))))));

int main(void)
{
    DISP(sqrt, 3.0);
    DISP2(fmin, 3.0, 2.0);
}