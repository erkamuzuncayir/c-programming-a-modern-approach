//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

long int is_hex_number(char* s);

int main(void)
{
    char* s = "223";

    long int result = is_hex_number(s);

    if (result != -1)
        printf("%s is a hex number: %ld\n", s, result);
    else
        printf("%s is not a hex number\n", s);
}

long int is_hex_number(char* s)
{
    char* p = s;
    while (*p)
    {
        if (!isxdigit(*p++))
            return -1;
    }

    return strtol(s, NULL, 16);
}
