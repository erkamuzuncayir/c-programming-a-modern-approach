//
// Created by erkam on 3/25/25.
//

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c (Chapter 20, page 515) */
/* Performs XOR encryption */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_ARG_COUNT 1
#define KEY '&'

int main(int argc, char* argv[])
{
    FILE *source_fp, *dest_fp;
    int   orig_char, new_char;

    if (argc <= DEFAULT_ARG_COUNT)
    {
        printf("usage: pp_02 filename\n");
        exit(EXIT_FAILURE);
    }

    if ((source_fp = fopen(argv[DEFAULT_ARG_COUNT], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }

    if ((dest_fp = fopen(argv[DEFAULT_ARG_COUNT + 1], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[DEFAULT_ARG_COUNT + 1]);
        exit(EXIT_FAILURE);
    }

    while ((orig_char = getc(source_fp)) != EOF)
    {
        new_char = orig_char ^ KEY;
        putc(new_char, dest_fp);
    }


    fclose(source_fp);
}
