//
// Created by erkam on 3/24/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_ARG_COUNT 1

int main(int argc, char* argv[])
{
    FILE* fp;
    int   ch;

    if (argc <= DEFAULT_ARG_COUNT)
    {
        printf("usage: pp_02 filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[DEFAULT_ARG_COUNT], "r+")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
        putchar(toupper(ch));

    fclose(fp);
    return 0;
}
