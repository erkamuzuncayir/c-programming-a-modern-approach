//
// Created by erkam on 3/27/25.
//

#include <stdarg.h>
#include <stdio.h>

void display(int n, ...);

int main(void) { display(4, "Special", "Agent", "Dale", "Cooper"); }

void display(int n, ...)
{
    va_list ap;
    va_start(ap, n);
    while (n > 0)
    {
        printf("%s ", va_arg(ap, char*));
        n--;
    }
    va_end(ap);
}
