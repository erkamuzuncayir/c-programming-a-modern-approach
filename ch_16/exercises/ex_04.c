//
// Created by erkam on 3/17/25.
//

typedef struct
{
    double real, imaginary;
} Complex;

Complex add_complex(Complex sc1, Complex sc2);
int     main(void) { Complex c1 = {1.0, 5.0}, c2 = {-3.0, -4.0}, c3; }

Complex make_complex(double d1, double d2) { return (Complex){d1, d2}; }

Complex add_complex(Complex sc1, Complex sc2) { return (Complex){sc1.real + sc2.real, sc1.imaginary + sc2.imaginary}; }
