//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    int month_first, day_first, year_first, month_second, day_second, year_second;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_first, &day_first, &year_first);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_second, &day_second, &year_second);

    if (year_first < year_second)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_first, day_first, year_first, month_second,
               day_second, year_second);
    else if (year_first > year_second)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_second, day_second, year_second, month_first,
               day_first, year_first);
    else
    {
        if (month_first < month_second)
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_first, day_first, year_first, month_second,
                   day_second, year_second);
        else if (month_first > month_second)
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_second, day_second, year_second, month_first,
                   day_first, year_first);
        else
        {
            if (day_first < day_second)
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_first, day_first, year_first,
                       month_second, day_second, year_second);
            else if (day_first > day_second)
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month_second, day_second, year_second,
                       month_first, day_first, year_first);
            else
                printf("They are same day");
        }
    }
}
