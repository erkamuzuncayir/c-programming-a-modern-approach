//
// Created by erkam on 3/11/25.
//

#include <stdio.h>

int count_spaces(const char* s);

int main(void)
{
    char s[] = "One two three spaces.";
    printf("White space count of \"%s\" is %d.\n", s, count_spaces(s));
}

int count_spaces(const char* s)
{
    int count = 0;

    while (*s)
        if (*s++ == ' ')
            count++;

    return count;
}
