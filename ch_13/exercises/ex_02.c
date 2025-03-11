//
// Created by erkam on 3/5/25.
//

#include <stdio.h>
int main(void)
{
    char* p = "abc";
    putchar(p); // Illegal, p is and pointer to char, not a char.
    putchar(*p); // Legal, output: a
    puts(p); // Legal, output: abc
    puts(*p); // Illegal, *p is a char not a string.
}
