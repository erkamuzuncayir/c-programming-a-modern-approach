//
// Created by erkam on 3/27/25.
//


#include <assert.h>
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define TRY_MATH_FNC(f, v) try_math_fnc(f, v, "Error in " #f)


double try_math_fnc(double (*fnc)(double), double value, char* error_text);

int main(void)
{
    printf("%f", try_math_fnc(sqrt, -1, "Error in sqrt"));
    printf("%f", TRY_MATH_FNC(sqrt, -1));
}

double try_math_fnc(double (*fnc)(double), double value, char* error_text)
{
    errno         = 0;
    double result = (*fnc)(value);

    if (errno != 0)
    {
        perror(error_text);
        exit(EXIT_FAILURE);
    }

    return result;
}
