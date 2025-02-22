//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    float income, tax;

    printf("Please enter amount of taxable income: ");
    scanf("%f", &income);

    if (income < 750)
        printf("Amount of tax is %.2f\n", income / 100);
    else if (income <= 2250)
    {
        tax = 7.50f + (income - 750.0f) / 2;
        printf("Amount of tax is %.2f\n", tax);
    }
    else if (income <= 3750)
    {
        tax = 37.50f + (income - 2250.0f) / 3;
        printf("Amount of tax is %.2f\n", tax);
    }
    else if (income <= 5250)
    {
        tax = 82.50f + (income - 3750.0f) / 4;
        printf("Amount of tax is %.2f\n", tax);
    }
    else if (income <= 7000)
    {
        tax = 142.50f + (income - 5250.0f) / 5;
        printf("Amount of tax is %.2f\n", tax);
    }
    else
    {
        tax = 230.0f + (income - 7000.0f) / 6;
        printf("Amount of tax is %.2f\n", tax);
    }
}
