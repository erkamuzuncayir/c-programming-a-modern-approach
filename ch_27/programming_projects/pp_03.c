//
// Created by erkam on 3/28/25.
//

#include <complex.h>
#include <stdio.h>

int main()
{
    double a, b, r, theta;

    printf("Enter a polar coordinate in radians (r + θ): ");
    scanf("%lf %lf", &r, &theta);

    a = r * ccos(theta);
    b = r * csin(theta);

    printf("a: %.2lf b: %.2lfi\n", a, b);

    return 0;
}
