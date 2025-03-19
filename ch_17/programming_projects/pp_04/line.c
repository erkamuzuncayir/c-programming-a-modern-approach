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

/* line.c (Chapter 15, page 364) */

#include "line.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 60

struct node
{
    struct node* next;
    char         value[];
};

struct node* line      = NULL;
int          line_len  = 0;
int          num_words = 0;

void clear_line(void)
{
    struct node* temp = NULL;
    while (line)
    {
        temp = line;
        line = line->next;
        free(temp);
    }
    line_len  = 0;
    num_words = 0;
}

void add_word(const char* word)
{
    struct node* new_word;
    if ((new_word = malloc(sizeof(struct node) + strlen(word) + 1)) == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(new_word->value, word);
    new_word->next = NULL;

    struct node** list_ptr = &line;
    while (*list_ptr)
    {
        list_ptr = &(*list_ptr)->next;
    }

    *list_ptr = new_word;
    line_len += strlen(word);
    if (num_words > 0)
        line_len++;

    num_words++;
}

int space_remaining(void) { return MAX_LINE_LEN - line_len; }

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i;
    int char_count = 0;
    struct node *current = line;
    extra_spaces = space_remaining();

    while (char_count < line_len && current) {
        printf("%s", current->value);
        if (num_words > 1) {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (i = 1; i <= spaces_to_insert + 1; i++)
                putchar(' ');

            extra_spaces -= spaces_to_insert;
        }
        char_count += strlen(current->value) + 1;
        num_words--;
        current = current->next;
    }
    putchar('\n');
}

void flush_line(void)
{
    if (line_len > 0)
    {
        for (int i = 0; line; i++, line = line ->next)
        {
            if (i > 0 && (line -> next != NULL))
                putchar(' ');

            printf("%s ", line->value);
        }
        printf("\n");
        clear_line();
    }
}
