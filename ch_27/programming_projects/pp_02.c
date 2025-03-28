//
// Created by erkam on 3/28/25.
//

#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, r, theta;

    printf("Enter a complex number (a + bi): ");
    scanf("%lf %lf", &a, &b);

    r     = sqrt(a * a + b * b);
    theta = atan2(b, a);

    printf("The polar form is: r = %.2lf, theta = %.2lf radians", r, theta);

    return 0;
}
