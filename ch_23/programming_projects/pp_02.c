//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int  is_non_blank = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (is_non_blank)
            putchar(ch);
        else if (!isspace(ch))
        {
            is_non_blank = 1;
            putchar(ch);
        }

        if (ch == '\n')
            is_non_blank = 0;
    }

    return 0;
}
