//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (strchr("\a\b\f\r\t\v", ch) != NULL)
            putchar('?');
        else
            putchar(ch);
    }

    return 0;
}
