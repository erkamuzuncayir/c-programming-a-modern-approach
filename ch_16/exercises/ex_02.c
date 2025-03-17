//
// Created by erkam on 3/17/25.
//

int main(void)
{
    // a.
    struct
    {
        double real, imaginary;
    } c1, c2, c3;

    // b.
    struct
    {
        double real, imaginary;
    } b_c1 = {0.0, 1.0}, b_c2 = {1.0, 0.0}, b_c3;

    // c.
    // It can be done with one statement.
    b_c1 = b_c2;

    // d.
    c3.real      = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
}
