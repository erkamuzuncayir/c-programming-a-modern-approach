//
// Created by erkam on 3/3/25.
//

#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);

int main(void)
{
    int amount = 57, twenties = 0, tens = 0, fives = 0, ones = 0;

    pay_amount(amount, &twenties, &tens, &fives, &ones);
    printf("For paying %d amount of dollars, you need %d twenty(ies), %d ten(s), %d five(s) and %d one(s) dollars", amount,
           twenties, tens, fives, ones);
}

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    *tens = dollars / 10;
    dollars -= *tens * 10;
    *fives = dollars / 5;
    dollars -= *fives * 5;
    *ones = dollars / 1;
}
