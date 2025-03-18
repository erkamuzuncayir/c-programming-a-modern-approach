//
// Created by erkam on 3/18/25.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void   make_empty(void);
bool   is_empty(void);
bool   push(double ope);
double pop(void);
void   stack_underflow();

#define STACK_SIZE 100

struct node
{
    int          value;
    struct node* next;
};

struct node* top = NULL;

bool push(double ope)
{
    struct node* next_node;
    if ((next_node = malloc(sizeof(struct node))) == NULL)
    {
        printf("Error in push. There is no memory!\n");
        return false;
    }

    next_node->value = ope;
    next_node->next  = top;
    top              = next_node;

    return true;
}

double pop(void)
{
    if (is_empty())
        stack_underflow();

    int          popped_value = top->value;
    struct node* popped_node  = top;
    top                       = top->next;
    free(popped_node);

    return popped_value;
}

void make_empty(void)
{
    struct node* cur;

    while (top != NULL)
    {
        cur = top;
        p   = top->next;
        free(cur);
    }
}

bool is_empty(void) { return top == NULL; }

void stack_underflow()
{
    printf("Stack underflow! Program terminating!");
    exit(EXIT_FAILURE);
}
