//
// Created by erkam on 3/25/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_ARG_COUNT 1

int main(int argc, char* argv[])
{
    FILE* fp;
    int   ch, char_count = 0, word_count = 0, line_count = 0, in_word = 0;

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
    {
        char_count++;

        if (ch == '\n')
            line_count++;

        if (isspace(ch))
        {
            if (in_word)
            {
                word_count++;
                in_word = 0;
            }
        }
        else
        {
            in_word = 1;
        }
    }

    // Add first line and last word
    line_count++;
    if (in_word)
        word_count++;

    fclose(fp);

    printf("%d chars %d words and %d lines\n", char_count, word_count, line_count);

    return 0;
}
