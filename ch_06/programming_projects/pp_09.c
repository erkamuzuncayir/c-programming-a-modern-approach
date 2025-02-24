//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    float loan = 0.0f, interest_rate = 0.0f, monthly_payment = 0.0f;
    int number_of_payments = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter amount of interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter amount of monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &number_of_payments);

    for (int i = 1; i <= number_of_payments; i++)
    {
        loan = loan - monthly_payment + (loan * (interest_rate / 100 / 12.0f));
        printf("Balance remaining after %d. payment: %.2f\n", i, loan);
    }
}