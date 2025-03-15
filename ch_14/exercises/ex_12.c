//
// Created by erkam on 3/15/25.
//

#include <stdio.h>

#define M 10

int main(void)
{
#if M
    printf("1");
#endif

#ifdef M
    printf("2");
#endif

#ifndef M // FAIL
    printf("3");
#endif

#if defined(M)
    printf("4");
#endif

#if !defined(M) // FAIL
    printf("5");
#endif
}
