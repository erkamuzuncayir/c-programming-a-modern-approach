//
// Created by erkam on 3/20/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"

#define STACK_SIZE 10

struct stack_type
{
    Item* contents;
    int   top;
    int   size;
};

int main(void)
{
    Stack stack = create(STACK_SIZE);
    char  c, i;
    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()) != '\n')
    {
        if (c == '{' || c == '(')
            push(stack, c);
        else if (c == '}')
        {
            i = pop(stack);
            if (i != '{')
            {
                push(stack, i);
                push(stack, c);
                printf("Parentheses/braces are not nested properly");
            }
        }
        else if (c == ')')
        {
            i = pop(stack);
            if (i != '(')
            {
                push(stack, i);
                push(stack, c);
                printf("Parentheses/braces are not nested properly");
            }
        }
    }

    if (stack->top == 0)
        printf("Parentheses/braces are nested properly.");
    else
        printf("Parentheses/braces are not nested properly");
}

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
