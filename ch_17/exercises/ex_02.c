//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(char* str);

int main(void)
{
    char* str = "hey";
    printf("Duplicate of \"%s\" is unsurprisingly \"%s\".", str, duplicate(str));
}

char* duplicate(char* str)
{
    char* d = malloc(sizeof(str + 1));

    if (d == NULL)
        return NULL;

    strcpy(d, str);
    return d;
}
