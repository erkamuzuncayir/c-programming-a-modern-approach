//
// Created by erkam on 3/26/25.
//

#include <math.h>
#include <stdio.h>
void find_roots(double a, double b, double c);

int main(void)
{
    printf("Roots of \"x^2 + 3x + 2\" are: ");
    find_roots(1.0, 3.0, 2.0);
}

void find_roots(double a, double b, double c)
{
    double det = (pow(b, 2) - (4 * a * c));
    if (det < 0)
    {
        printf("Roots are complex numbers\n");
        return;
    }
    double first_root  = (-b + det) / 2 * a;
    double second_root = (-b - det) / 2 * a;

    if (first_root == second_root)
        printf("There is only 1 root %f\n", first_root);
    else
        printf("First root is %f, and second root is %f\n", first_root, second_root);
}
