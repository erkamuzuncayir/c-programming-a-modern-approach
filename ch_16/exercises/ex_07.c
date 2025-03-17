//
// Created by erkam on 3/17/25.
//

#include <stdio.h>

struct fraction
{
    int numerator, denominator;
};

struct fraction reduce(struct fraction f);
struct fraction add(struct fraction f1, struct fraction f2);
struct fraction subtract(struct fraction f1, struct fraction f2);
struct fraction multiply(struct fraction f1, struct fraction f2);
struct fraction divide(struct fraction f1, struct fraction f2);

int main(void)
{
    struct fraction f1 = {15, 35};

    struct fraction reduced_f1 = reduce(f1);
    printf("Fraction %d/%d, in lowest terms: %d/%d\n", f1.numerator, f1.denominator, reduced_f1.numerator,
           reduced_f1.denominator);

    struct fraction sumOfTwo = add(f1, reduced_f1);
    printf("Sum of %d/%d and %d/%d is: %d/%d.\n", f1.numerator, f1.denominator, reduced_f1.numerator,
           reduced_f1.denominator, sumOfTwo.numerator, sumOfTwo.denominator);

    struct fraction subtractOfTwo = subtract(f1, reduced_f1);
    printf("Subtract from %d/%d in %d/%d is: %d/%d.\n", reduced_f1.numerator, reduced_f1.denominator, f1.numerator,
           f1.denominator, subtractOfTwo.numerator, subtractOfTwo.denominator);

    struct fraction multiplyOfTwo = multiply(f1, reduced_f1);
    printf("Multiply of %d/%d and %d/%d is: %d/%d.\n", f1.numerator, f1.denominator, reduced_f1.numerator,
           reduced_f1.denominator, multiplyOfTwo.numerator, multiplyOfTwo.denominator);

    struct fraction divideByOneToAnother = divide(f1, reduced_f1);
    printf("Divide %d/%d by %d/%d is: %d/%d.\n", reduced_f1.numerator, reduced_f1.denominator, f1.numerator,
           f1.denominator, divideByOneToAnother.numerator, divideByOneToAnother.denominator);
}

struct fraction reduce(struct fraction f)
{
    int m = f.numerator;
    int n = f.denominator;
    int temp;

    while (n != 0)
    {
        temp = m % n;
        m    = n;
        n    = temp;
    }

    return (struct fraction){f.numerator / m, f.denominator / m};
}

struct fraction add(struct fraction f1, struct fraction f2)
{
    return reduce((struct fraction){f1.numerator * f2.denominator + f1.denominator * f2.numerator,
                                    f1.denominator * f2.denominator});
}

struct fraction subtract(struct fraction f1, struct fraction f2)
{
    return reduce((struct fraction){f1.numerator * f2.denominator - f1.denominator * f2.numerator,
                                    f1.denominator * f2.denominator});
}

struct fraction multiply(struct fraction f1, struct fraction f2)
{
    return reduce((struct fraction){f1.numerator * f2.numerator, f1.denominator * f2.denominator});
}

struct fraction divide(struct fraction f1, struct fraction f2)
{
    return reduce((struct fraction){f1.numerator * f2.denominator, f1.denominator * f2.numerator});
}
