//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    float amount = 0;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float amount_tax_included = amount * 1.05f;
    printf("With tax added: $%.2f", amount_tax_included);
}
