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

/* fcopy.c (Chapter 22, page 568) */
/* Copies a file */

#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 10000

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        fprintf(stderr, "usage: pp_16 source\n");
        exit(EXIT_FAILURE);
    }

    if ((source_fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int temp;
    while ((temp = fread(buffer, sizeof(char), BUFFER_SIZE, source_fp)) > 0)
    {
        fwrite(buffer, sizeof(char), temp, dest_fp);
    }

    fclose(source_fp);
    return 0;
}


