//
// Created by erkam on 3/20/25.
//

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* stackADT2.c (Chapter 19, page 498) */

#include "stackADT2.h"
#include <stdio.h>
#include <stdlib.h>

struct stack_type
{
    Item* contents;
    int   top;
    int   size;
};

static void terminate(const char* message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(int size)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error in create: stack could not be created.");
    s->contents = malloc(size * sizeof(Item));
    if (s->contents == NULL)
    {
        free(s);
        terminate("Error in create: stack could not be created.");
    }
    s->top  = 0;
    s->size = size;
    return s;
}

void destroy(Stack s)
{
    free(s->contents);
    free(s);
}

void make_empty(Stack s) { s->top = 0; }

bool is_empty(Stack s) { return s->top == 0; }

bool is_full(Stack s) { return s->top == s->size; }

void resize_contents(Stack s)
{
    Item* new_contents = realloc(s->contents, (s->size * 2) * sizeof(Item));
    if (!new_contents)
        terminate("Error: Memory allocation failed while increasing stack size.");

    s->contents = new_contents;
    s->size *= 2;
}

void push(Stack s, Item i)
{
    if (is_full(s))
        resize_contents(s);
    s->contents[s->top++] = i;
}

Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty.");
    return s->contents[--s->top];
}
