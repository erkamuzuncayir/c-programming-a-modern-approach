//
// Created by erkam on 3/25/25.
//
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

    for (int i = DEFAULT_ARG_COUNT; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r+")) == NULL)
        {
            fprintf(stderr, "Can't open file %s\n", argv[i]);
            exit(EXIT_FAILURE);
        }

        while ((ch = getc(fp)) != EOF)
            putchar(ch);

        fclose(fp);
    }
    return 0;
}