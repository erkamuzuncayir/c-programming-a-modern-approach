//
// Created by erkam on 3/17/25.
//

struct complex
{
    double real, imaginary;
};

int main(void) { struct complex c1, c2, c3; }

struct complex make_complex(double d1, double d2) { return (struct complex){d1, d2}; }

struct complex add_complex(struct complex sc1, struct complex sc2)
{
    return (struct complex){sc1.real + sc2.real, sc1.imaginary + sc2.imaginary};
}