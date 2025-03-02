//
// Created by erkam on 3/1/25.
//

#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int  top = 0;

void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void push(char);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(void)
{
    char c, i;
    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()) != '\n')
    {
        if (c == '{' || c == '(')
            push(c);
        else if (c == '}')
        {
            i = pop();
            if (i != '{')
            {
                push(i);
                push(c);
                printf("Parentheses/braces are not nested properly");
            }
        }
        else if (c == ')')
        {
            i = pop();
            if (i != '(')
            {
                push(i);
                push(c);
                printf("Parentheses/braces are not nested properly");
            }
        }
    }

    if (top == 0)
        printf("Parentheses/braces are nested properly.");
    else
        printf("Parentheses/braces are not nested properly");
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    return '\0';
}

void stack_overflow()
{
    printf("Parentheses/braces are not nested properly");
    printf("Stack overflow! Program terminating!");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Parentheses/braces are not nested properly");
    printf("Stack underflow! Program terminating!");
    exit(EXIT_FAILURE);
}
