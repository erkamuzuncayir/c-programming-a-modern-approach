//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    // (a) Same.

    int first_decimal = 0, second_decimal = 0;

    printf("Enter a number: ");
    scanf("%d", &first_decimal);

    printf("Enter same number: ");
    scanf(" %d", &second_decimal);

    printf("First: %d, second: %d\n", first_decimal, second_decimal);

    // (b) Same.

    int third_decimal = 0, fourth_decimal = 0, fifth_decimal = 0, sixth_decimal = 0;

    printf("Enter 3 numbers: ");
    scanf("%d-%d-%d", &first_decimal, &second_decimal, &third_decimal);

    printf("Enter same numbers: ");
    scanf("%d -%d -%d", &fourth_decimal, &fifth_decimal, &sixth_decimal);

    printf("First triple: %d-%d-%d, second triple: %d-%d-%d\n",
        first_decimal, second_decimal, third_decimal, fourth_decimal, fifth_decimal, sixth_decimal);

    // (c) Not the same, second one expect white space character after entering value.
    float first_floating = 0.0f, second_floating = 0.0f;

    printf("Enter a number: ");
    scanf("%f", &first_floating);

    printf("Enter same number: ");
    scanf("%f ", &second_floating);

    printf("First: %d, second: %d\n", first_floating, second_floating);

    // (d) Same

    float third_floating = 0.0f, fourth_floating = 0.0f;

    printf("Enter 2 numbers: ");
    scanf("%f,%f", &first_floating, &second_floating);

    printf("Enter same numbers: ");
    scanf("%f, %f", &third_floating, &fourth_floating);

    printf("First double: %f,%f, second double: %f, %f\n",
        first_floating, second_floating, third_floating, fourth_floating);
}
