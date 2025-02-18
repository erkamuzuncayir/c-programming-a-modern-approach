//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

int main(void)
{
    int digit_one, digit_two, digit_three;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit_one, &digit_two, &digit_three);
    printf("The reversal is: %d%d%d\n", digit_three, digit_two, digit_one);
}
