//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#define MAX_LAST_NAME_LENGTH 20
int main(void)
{
    char last_name[20] = {'\0'};
    char c, name_first_letter;
    int  i = 0;

    while ((c = getchar()) == ' ')
        ;

    name_first_letter = c;

    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
            last_name[i++] = c;
    }
    last_name[i++] = ',';
    last_name[i++] = ' ';
    last_name[i]   = name_first_letter;

    i = 0;
    while (last_name[i] != '\0')
        printf("%c", last_name[i++]);
}
