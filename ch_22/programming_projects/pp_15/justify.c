//
// Created by erkam on 3/16/25.
//

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* justify.c (Chapter 15, page 363) */
/* Formats a file of text */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20
#define DEFAULT_ARG_COUNT 1

int main(int argc, char* argv[])
{
    FILE *src_fp, *dest_fp;

    if (argc < DEFAULT_ARG_COUNT + 2)
    {
        fprintf(stderr, "usage: %s source_file destination_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((src_fp = fopen(argv[DEFAULT_ARG_COUNT], "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }
    if ((dest_fp = fopen(argv[DEFAULT_ARG_COUNT + 1], "w")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT + 2]);
        exit(EXIT_FAILURE);
    }

    char word[MAX_WORD_LEN + 2];
    int  word_len;

    clear_line();
    for (;;)
    {
        read_word(src_fp, word, MAX_WORD_LEN + 1);
        word_len = strlen(word);
        if (word_len == 0)
        {
            flush_line(dest_fp);
            return 0;
        }
        if (word_len + 1 > space_remaining())
        {
            write_line(dest_fp);
            clear_line();
        }
        add_word(word);
    }

    fclose(src_fp);
    fclose(dest_fp);
    return 0;
}
