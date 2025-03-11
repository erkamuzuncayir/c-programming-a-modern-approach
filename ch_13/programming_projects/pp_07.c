//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
int main(void)
{
    char* first_digits[] = {"one.", "two.", "three", "four.", "five.", "six.", "seven.", "eight.", "nine."};

    char* ten_to_twenty[] = {"ten.",     "eleven.",  "twelve.",    "thirteen.", "fourteen.",
                             "fifteen.", "sixteen.", "seventeen.", "eighteen.", "nineteen."};

    char* second_digits[] = {"twenty-", "thirty-", "forty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};
    int   num, d1, d2;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    d1 = num / 10;
    d2 = num % 10;

    printf("You entered the number ");

    if (d1 == 1)
        printf("%s", ten_to_twenty[d2]);
    else
        printf("%s%s\n", second_digits[d1 - 2], first_digits[d2 - 1]);
}
