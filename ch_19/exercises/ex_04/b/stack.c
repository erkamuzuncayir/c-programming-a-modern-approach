//
// Created by erkam on 3/20/25.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

static void terminate(const char* message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(Stack* s)
{
    while (!is_empty(s))
        pop(s);
}

bool is_empty(Stack* s) { return *s == NULL; }

bool is_full(Stack* s) { return false; }

void push(Stack* s, int i)
{
    struct node* new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error: Memory allocation failed.");

    new_node->value = i;
    new_node->next  = *s;
    *s              = new_node;
}

int pop(Stack* s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty.");

    int    popped_value = (*s)->value;
    Stack* old_top      = s;
    (*s)                = (*s)->next;
    free(*old_top);

    return popped_value;
}
