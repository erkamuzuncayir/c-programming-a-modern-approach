//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, opr, result_num = 0, result_denom = 0;

    printf("Enter two fractions separated by a operator sign: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &opr, &num2, &denom2);

    switch (opr)
    {
        case '+':
            result_num   = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num   = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num   = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num   = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            printf("Unknown operator: %c", opr);
    }

    printf("The result is %d/%d\n", result_num, result_denom);
}
