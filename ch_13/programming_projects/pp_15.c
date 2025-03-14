//
// Created by erkam on 3/14/25.
//

#include <ctype.h>
#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
double contents[STACK_SIZE] = {0.0};
int    top                  = 0;

int    evaluate_RPN_expression(const char* expression);
void   evaluate_expression(char);
void   print_expression(void);
void   make_empty(void) { top = 0; }
bool   is_empty(void) { return top == 0; }
bool   is_full(void) { return top == STACK_SIZE; }
void   push(double);
double pop(void);
void   stack_overflow();
void   stack_underflow();

int main(void)
{
    char  expression[STACK_SIZE] = {'\0'};
    char* expression_ptr         = expression;
    char  ch;

    for (;;)
    {
        printf("Enter an RPN expression: ");
        ch = getchar();
        while (ch != '\n')
        {
            if (ch != ' ')
                *expression_ptr++ = ch;

            ch = getchar();
        }

        printf("Result of expression is: %d.\n", evaluate_RPN_expression(expression));
    }
}

int evaluate_RPN_expression(const char* expression)
{
    do
    {
        if (*expression >= '0' && *expression <= '9')
        {
            push(*expression - '0');
        }
        else if (*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/')
        {
            evaluate_expression(*expression);
        }
        else if (*expression == '=')
        {
            int result = pop();
            make_empty();
            return result;
        }
        else if (*expression != '\0')
            printf("Neither operand nor operation %c", *expression);
    }
    while (*expression++);
}

void print_expression(void)
{
    printf("Value of expression: %f", pop());
    make_empty();
}

void evaluate_expression(char opr)
{
    double opr2;
    switch (opr)
    {
        case '+':
            push(pop() + pop());
            break;
        case '-':
            opr2 = pop();
            push(pop() - opr2);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '/':
            opr2 = pop();
            push(pop() / opr2);
            break;
        default:
            printf("Unhandled operation!");
            break;
    }
}

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
