//
// Created by erkam on 3/26/25.
//

#include <math.h>
#include <stdio.h>
int main(void)
{
    double amount, interest_rate;
    int    years;

    printf("Please enter deposited money amount, interest rate and years respectively: ");
    scanf("%lf %lf %d", &amount, &interest_rate, &years);

    double result = amount * (exp((interest_rate / 100) * years));
    printf("Your amount after %d years will be %.2f\n", years, result);
}
