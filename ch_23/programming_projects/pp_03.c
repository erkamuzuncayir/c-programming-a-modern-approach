//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool is_word_capitalized = false;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if (!is_word_capitalized)
            {
                ch                  = toupper(ch);
                is_word_capitalized = true;
            }
        }
        else
            is_word_capitalized = false;

        putchar(ch);
    }

    return 0;
}
