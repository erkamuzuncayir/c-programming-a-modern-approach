//
// Created by erkam on 3/17/25.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
double contents[STACK_SIZE] = {0.0};
int    top                  = 0;

void push(double ope)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ope;
}

double pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    return '\0';
}

void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }

void stack_overflow()
{
    printf("Stack overflow! Program terminating!");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Stack underflow! Program terminating!");
    exit(EXIT_FAILURE);
}
