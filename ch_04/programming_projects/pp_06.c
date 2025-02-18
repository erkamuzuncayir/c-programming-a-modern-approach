//
// Created by erkam on 2/18/25.
//

#include <stdio.h>

int main(void)
{
    int d_1, d_2, d_3, d_4, d_5, d_6, d_7, d_8, d_9, d_10, d_11, d_12, first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d_1, &d_2, &d_3, &d_4, &d_5, &d_6, &d_7, &d_8, &d_9, &d_10, &d_11,
          &d_12);

    first_sum = d_2 + d_4 + d_6 + d_8 + d_10 + d_12;
    second_sum = d_1 + d_3 + d_5 + d_7 + d_9 + d_11;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
