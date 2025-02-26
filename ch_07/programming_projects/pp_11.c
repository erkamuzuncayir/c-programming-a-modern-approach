//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    char c, name_first_letter;

    while ((c = getchar()) == ' ')
        ;

    name_first_letter = c;

    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
            printf("%c", c);
    }

    printf(", %c", name_first_letter);
}