//
// Created by erkam on 2/27/25.
//

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    int  digit_seen_count[10] = {0};
    int  digit;
    long n;

    printf("Enter a number:\t");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        digit_seen_count[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t\t");
    for (int i = 0; i < sizeof(digit_seen_count) / sizeof(digit_seen_count[0]); i++)
        printf("%d ", i);

    printf("\nOccurrences:\t");
    for (int i = 0; i < sizeof(digit_seen_count) / sizeof(digit_seen_count[0]); i++)
            printf("%d ", digit_seen_count[i]);


    return 0;
}
