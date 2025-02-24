//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int earliest_month, earliest_day, earliest_year, input_month, input_day, input_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &earliest_month, &earliest_day, &earliest_year);

    input_year  = earliest_year;
    input_month = earliest_month;
    input_day   = earliest_day;

    do
    {
        if (earliest_year > input_year)
        {
            earliest_year  = input_year;
            earliest_month = input_month;
            earliest_day   = input_day;
        }
        else if (earliest_year == input_year)
        {
            if (earliest_month > input_month)
            {
                earliest_year  = input_year;
                earliest_month = input_month;
                earliest_day   = input_day;
            }
            else if (earliest_month == input_month)
            {
                if (earliest_day > input_day)
                {
                    earliest_year  = input_year;
                    earliest_month = input_month;
                    earliest_day   = input_day;
                }
            }
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &input_month, &input_day, &input_year);
    }
    while (input_month != 0 && input_day != 0 && input_year != 0);

    printf("%d/%d/%d is the earliest date", earliest_month, earliest_day, earliest_year);
}
