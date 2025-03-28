//
// Created by erkam on 3/28/25.
//

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* quadratic.c (Chapter 27, page 723) */
/* Finds the roots of the equation 5x**2 + 2x + 1 = 0 */

#include <complex.h>
#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    double a, b, c;
    printf("Enter coefficients of a quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = sqrt(b * b - 4 * a * c);

    if (discriminant >= 0)
    {
        double root1 = (-b + discriminant) / (2 * a);
        double root2 = (-b - discriminant) / (2 * a);
        printf("root1 = %g\n", root1);
        printf("root2 = %g\n", root2);
    }
    else
    {
        double complex discriminant_sqrt = csqrt(b * b - 4 * a * c);
        double complex c_root1           = (-b + discriminant_sqrt) / (2 * a);
        double complex c_root2           = (-b - discriminant_sqrt) / (2 * a);

        if (cimag(c_root1) < 0)
            printf("root1 = %g - %gi\n", creal(c_root1), cabs(cimag(c_root1)));
        else
            printf("root1 = %g + %gi\n", creal(c_root1), cimag(c_root1));

        if (cimag(c_root2) < 0)
            printf("root2 = %g - %gi\n", creal(c_root2), cabs(cimag(c_root2)));
        else
            printf("root2 = %g + %gi\n", creal(c_root2), cimag(c_root2));
    }

    return 0;
}
