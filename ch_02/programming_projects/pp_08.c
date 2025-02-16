//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    float loan = 0.0f, interest_rate = 0.0f, monthly_payment = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter amount of interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter amount of monthly payment: ");
    scanf("%f", &monthly_payment);

    loan = loan - monthly_payment + (loan * (interest_rate / 100 / 12.0f));
    printf("Balance remaining after first payment: %.2f\n", loan);

    loan = loan - monthly_payment + (loan * (interest_rate / 100 / 12.0f));
    printf("Balance remaining after second payment: %.2f\n", loan);

    loan = loan - monthly_payment + (loan * (interest_rate / 100 / 12.0f));
    printf("Balance remaining after third payment: %.2f\n", loan);
}
