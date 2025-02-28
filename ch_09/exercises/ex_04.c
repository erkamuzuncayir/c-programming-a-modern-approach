//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int day_of_year(int, int, int);

int main(void)
{
    int day = 28, month = 3, year = 2024;
    printf("%d/%2d/%2d is the %d. day of the year.\n", month, day, year, day_of_year(month, day, year));
}

int day_of_year(int month, int day, int year)
{
    int day_counts_of_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count              = day;

    for (int i = 0; i < month - 1; i++)
        day_count += day_counts_of_months[i];

    if (month > 1 && year % 4 == 0)
        day_count++;

    return day_count;
}
