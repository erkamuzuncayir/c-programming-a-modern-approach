//
// Created by erkam on 3/14/25.
//

#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void)
{
    char s[4];
    int i;

    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
}