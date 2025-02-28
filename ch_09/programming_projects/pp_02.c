//
// Created by erkam on 2/28/25.
//

#include <stdio.h>

double calculate_tax(double);

int main(void)
{
    float income;

    printf("Please enter amount of taxable income: ");
    scanf("%f", &income);

    printf("Amount of tax is %.2f\n", calculate_tax(income));
}

double calculate_tax(double income)
{
    double tax = 0;
    if (income < 750)
        tax = income / 100;
    else if (income <= 2250)
        tax = 7.50f + (income - 750.0f) / 2;
    else if (income <= 3750)
        tax = 37.50f + (income - 2250.0f) / 3;
    else if (income <= 5250)
        tax = 82.50f + (income - 3750.0f) / 4;
    else if (income <= 7000)
        tax = 142.50f + (income - 5250.0f) / 5;
    else
        tax = 230.0f + (income - 7000.0f) / 6;

    return tax;
}
