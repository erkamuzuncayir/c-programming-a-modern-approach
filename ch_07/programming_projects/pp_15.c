//
// Created by erkam on 2/26/25.
//

#include <stdio.h>

// Solution
// short: 7
// int: 16
// long: 20
// long long: 25
// float: 34
// double: 170
// long double: 1754

int main(void)
{
    int num;
    long double factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
        factorial *= i;

    printf("Factorial of %d: %Lf", num, factorial);
}
