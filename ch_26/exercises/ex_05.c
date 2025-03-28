//
// Created by erkam on 3/27/25.
//

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* vstrcat(const char* first, ...);

int main(void) { printf("%s\n", vstrcat("hello", "world", "ss ss", NULL)); }

char* vstrcat(const char* first, ...)
{
    int     len = strlen(first);
    char *  current, *result;
    va_list ap;

    va_start(ap, first);
    while ((current = va_arg(ap, char*)) != NULL)
    {
        len += strlen(current);
    }
    va_end(ap);

    result = malloc((len + 1) * sizeof(char));
    if (result == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    va_start(ap, first);
    memcpy(result, first, strlen(first));

    va_start(ap, first);
    while ((current = va_arg(ap, char*)) != NULL)
    {
        strcat(result, current);
    }
    va_end(ap);

    return result;
}
