//
// Created by erkam on 3/20/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(Stack *s)
{
    s->top = 0;
}

bool is_empty(Stack *s)
{
    return s->top == 0;
}

bool is_full(Stack *s)
{
    return s->top == STACK_SIZE;
}

void push(Stack *s, int i)
{
    if (is_full())
        terminate("Error in push: stack is full.");

    s->contents[s->top++] = i;
}

int pop(Stack *s)
{
    if (is_empty())
        terminate("Error in pop: stack is empty.");
    return s->contents[--s->top];
}