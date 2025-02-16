//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int first_num = 0, second_num = 0, third_num = 0, fourth_num = 0, fifth_num = 0, sixth_num = 0,
    seventh_num = 0, eighth_num = 0, ninth_num = 0, tenth_num = 0, eleventh_num = 0, twelfth_num = 0,
    thirteenth_num = 0, fourteenth_num = 0, fifteenth_num = 0, sixteenth_num = 0;

    printf("Enter the numbers from 1 to 16 in any orders: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &first_num, &second_num, &third_num, &fourth_num,
    &fifth_num, &sixth_num, &seventh_num, &eighth_num, &ninth_num, &tenth_num, &eleventh_num, &twelfth_num,
    &thirteenth_num, &fourteenth_num, &fifteenth_num, &sixteenth_num);

    int first_row = first_num + second_num + third_num + fourth_num;
    int second_row = fifth_num + sixth_num + seventh_num + eighth_num;
    int third_row = ninth_num + tenth_num + eleventh_num + twelfth_num;
    int fourth_row = thirteenth_num + fourteenth_num + fifteenth_num + sixteenth_num;

    int first_column = first_num + fifth_num + ninth_num + thirteenth_num;
    int second_column = second_num + sixth_num + tenth_num + fourteenth_num;
    int third_column = third_num + seventh_num + eleventh_num + fifteenth_num;
    int fourth_column = fourth_num + eighth_num + twelfth_num + sixteenth_num;

    int left_diagonal = first_num + sixth_num + eleventh_num + sixteenth_num;
    int right_diagonal = fourth_num + seventh_num + tenth_num + thirteenth_num;

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", first_num, second_num, third_num,
        fourth_num, fifth_num, sixth_num, seventh_num, eighth_num, ninth_num, tenth_num, eleventh_num,
        twelfth_num, thirteenth_num, fourteenth_num, fifteenth_num, sixteenth_num);

    printf("Row sums: %d %d %d %d\n", first_row, second_row, third_row, fourth_row);
    printf("Column sums: %d %d %d %d\n", first_column, second_column, third_column, fourth_column);
    printf("Diagonal sums: %d %d\n", left_diagonal, right_diagonal);
}
