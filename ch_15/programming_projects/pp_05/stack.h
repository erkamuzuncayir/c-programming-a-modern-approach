//
// Created by erkam on 3/17/25.
//

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void   make_empty(void);
bool   is_empty(void);
bool   is_full(void);
void   push(double);
double pop(void);
void   stack_overflow();
void   stack_underflow();

#endif // STACK_H
