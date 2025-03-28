//
// Created by erkam on 3/28/25.
//

#include <tgmath.h>
int main(void)
{
    int                 i;
    float               f;
    double              d;
    long double         ld;
    float complex       fc;
    double complex      dc;
    long double complex ldc;

    tan(i);             // tan(i);
    fabs(f);            // fabsf(f);
    asin(d);            // asin(d);
    exp(ld);            // expl(ld);
    log(fc);            // clogf(fc);
    acosh(dc);          // cacosh(dc);
    nexttoward(d, ld);  // nexttoward(d, ld);
    remainder(f, i);    // remainder(f, i);
    copysign(d, ld);    // copysignl(d, ld);
    carg(i);            // carg(i);
    cimag(f);           // cimagf(f);
    conj(ldc);          // conjl(ldc);
}
