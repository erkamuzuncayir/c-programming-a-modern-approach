//
// Created by erkam on 3/11/25.
//

#include <ctype.h>
#include <stdio.h>

void reverse_name(char* name);

int main(void)
{
    char full_name[] = "  Erkam  Uzuncayir  ";
    printf("Reversed version of \"%s\" is: ", full_name);
    reverse_name(full_name);
    printf("%s", full_name);
}

void reverse_name(char* name)
{
    char first_name;
    int  source_index = 0, dest_index = 0;

    while (name[source_index++] == ' ')
        ;

    first_name = toupper(name[--source_index]);

    source_index++;

    while (name[source_index++] != ' ')
        ;

    while (name[source_index++] == ' ')
        ;

    source_index--;
    while (name[source_index] != ' ')
    {
        name[dest_index++] = name[source_index++];
    }
    name[dest_index++] = ' ';
    name[dest_index++] = first_name;
    name[dest_index]   = '\0';
}
