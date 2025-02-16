//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int remaining_amount = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &remaining_amount);

    printf("$20 bills: %d\n", remaining_amount / 20);
    remaining_amount = remaining_amount % 20;

    printf("$10 bills: %d\n", remaining_amount / 10);
    remaining_amount = remaining_amount % 10;

    printf("$5 bills: %d\n", remaining_amount / 5);
    remaining_amount = remaining_amount % 5;

    printf("$1 bills: %d\n", remaining_amount / 1);
}
