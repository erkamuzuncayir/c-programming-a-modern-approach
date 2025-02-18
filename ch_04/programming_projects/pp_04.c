//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

int main(void)
{
    int decimal_number;
    int octal_number = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal_number);

    octal_number += (decimal_number % 8) * 1;
    decimal_number /= 8;
    octal_number += (decimal_number % 8) * 10;
    decimal_number /= 8;
    octal_number += (decimal_number % 8) * 100;
    decimal_number /= 8;
    octal_number += (decimal_number % 8) * 1000;
    decimal_number /= 8;
    octal_number += (decimal_number % 8) * 10000;
    decimal_number /= 8;

    printf("In octal, your number is: %d\n", octal_number);
}
