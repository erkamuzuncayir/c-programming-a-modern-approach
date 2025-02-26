//
// Created by erkam on 2/26/25.
//

#include <stdio.h>

int main(void)
{
    float sum, op;
    char  c;

    printf("Enter an expression: ");
    scanf("%f", &sum);

    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
            case '+':
                scanf("%f", &op);
                sum += op;
                break;
            case '-':
                scanf("%f", &op);
                sum -= op;
                break;
            case '*':
                scanf("%f", &op);
                sum *= op;
                break;
            case '/':
                scanf("%f", &op);
                sum /= op;
                break;
            default:
                continue;
        }
    }

    printf("Value of expression: %.2f", sum);
}
