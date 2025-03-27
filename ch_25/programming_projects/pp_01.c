//
// Created by erkam on 3/27/25.
//

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *temp, *c_locale;
    temp = setlocale(LC_ALL, NULL);
    if (temp == NULL)
    {
        printf("\"C\" locale information can't found!\n");
        exit(EXIT_FAILURE);
    }

    c_locale = malloc(strlen(temp) + 1);
    if (c_locale == NULL)
    {
        fprintf(stderr, "Memory allocation failed!");
        exit(EXIT_FAILURE);
    }

    strcpy(c_locale, temp);

    temp = setlocale(LC_ALL, "");
    if (temp == NULL)
    {
        printf("Native locale information can't found!\n");
        exit(EXIT_FAILURE);
    }

    if (strcmp(temp, c_locale) == 0)
        printf("Native locale is \"C\" locale.\n");
    else
        printf("Native locale is not \"C\" locale.\n");

    free(c_locale);
    return 0;
}
