//
// Created by erkam on 3/24/25.
//

#include <stdio.h>
int main(void)
{
    printf("%#012.5g\n", 83.7361);      // 00000083.736
    printf("%#012.5g\n", 29748.6607);   // 00000029749.
    printf("%#012.5g\n", 1054932234.0); // 001.0549e+09
    printf("%#012.5g\n", 0.0000235218); // 002.3522e-05
}
