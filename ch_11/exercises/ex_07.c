//
// Created by erkam on 3/3/25.
//

#include <stdio.h>
#define MONTH_COUNT 12
void split_date(int day_of_year, int year, int* month, int* day);

int days_of_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int day_of_year = 62, year = 2025, month = 0, day = 0;
    split_date(day_of_year, year, &month, &day);
    printf("%d/%d/%d is the %d. day of the year", month, day, year, day_of_year);
}

void split_date(int day_of_year, int year, int* month, int* day)
{
    for (*month = 0; *month < MONTH_COUNT;)
    {
        if (day_of_year - days_of_months[*month] > 0)
            day_of_year -= days_of_months[(*month)++];
        else
            break;
    }
    // Due index
    (*month)++;

    if (year % 4 == 0 && *month > 1)
        day_of_year--;

    *day = day_of_year;
}
