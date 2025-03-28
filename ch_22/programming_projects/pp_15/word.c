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

/* word.c (Chapter 15, page 363) */

#include <stdio.h>
#include "word.h"

int read_char(FILE* fp)
{
    int ch = getc(fp);

    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_word(FILE* fp, char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char(fp)) == ' ')
        ;
    while (ch != ' ' && ch != EOF) {
        if (pos < len - 1)
            word[pos++] = ch;
        else if (pos <= len - 1)
            word[pos++] = '*';
        ch = read_char(fp);
    }
    word[pos] = '\0';
}
