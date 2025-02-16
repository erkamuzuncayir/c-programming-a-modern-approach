//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int day = 0, month = 0, year = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%d%d", year, month, day);
}
