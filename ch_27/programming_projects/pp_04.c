//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    int            k, n = 5;
    double complex c;

    for (k = 0; k < n; k++)
    {
        c = cexp((2 * M_PI * I * k) / n);

        if (cimag(c) == 0)
            printf("root of unity %d: %f\n", k, creal(c));
        else if (cimag(c) == 1 || cimag(c) == -1)
            printf("root of unity %d: %f %c i\n", k, creal(c), cimag(c) < 0 ? '-' : '+');
        else
            printf("root of unity %d: %f %c %fi\n", k, creal(c), cimag(c) < 0 ? '-' : '+', cabs(cimag(c)));
    }
}
