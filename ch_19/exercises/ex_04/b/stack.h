//
// Created by erkam on 3/20/25.
//

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>   /* C99 only */

struct node
{
    int value;
    struct node *next;
};
typedef struct node *Stack;

void make_empty(Stack *s);
bool is_empty(Stack *s);
bool is_full(Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

#endif //STACK_H
