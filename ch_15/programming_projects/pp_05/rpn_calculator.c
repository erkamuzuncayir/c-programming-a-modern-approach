//
// Created by erkam on 3/17/25.
//

#include <stdio.h>
#include "stack.h"

void evaluate_expression(char);
void print_expression(void);

int main(void)
{
    char ch;

    for (;;)
    {
        printf("Enter an RPN expression: ");
        scanf(" %c", &ch);
        while (ch != '\n')
        {
            if (ch >= '0' && ch <= '9')
            {
                push(ch - '0');
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                evaluate_expression(ch);
            }
            else if (ch == '=')
            {
                print_expression();
            }
            else
                return 0;

            scanf(" %c", &ch);
        }
    }
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
