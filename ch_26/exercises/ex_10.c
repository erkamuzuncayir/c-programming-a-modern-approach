//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str = "12345";
    printf("%ld\n", strtol(str, &str, 10));
    printf("%Lg\n", strtold(str, &str));
    printf("%ld\n", strtoll(str, &str, 10));
}
