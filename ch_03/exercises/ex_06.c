//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d /%d", &num1, &denom1); // A white space after first %d will be enough.

    printf("Enter second fraction: ");
    scanf("%d /%d", &num2, &denom2); // A white space after first %d will be enough.

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}