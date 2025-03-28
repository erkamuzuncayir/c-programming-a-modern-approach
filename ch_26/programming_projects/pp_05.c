//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm date_one = {date_one.tm_sec = date_one.tm_min = date_one.tm_hour = date_one.tm_mday = date_one.tm_mon =
                              date_one.tm_wday                                                    = 0};
    struct tm date_two = {date_one.tm_sec = date_one.tm_min = date_one.tm_hour = date_one.tm_mday = date_one.tm_mon =
                              date_one.tm_wday                                                    = 0};

    printf("Please enter first date: (month, day and year): ");
    scanf("%d %d %d", &date_one.tm_mon, &date_one.tm_mday, &date_one.tm_year);

    printf("Please enter second date: (month, day and year): ");
    scanf("%d %d %d", &date_two.tm_mon, &date_two.tm_mday, &date_two.tm_year);

    mktime(&date_one);

    printf("Date difference of %d/%d/%d and %d/%d/%d are %d days.\n", date_one.tm_mon, date_one.tm_mday,
           date_one.tm_year, date_two.tm_mon, date_two.tm_mday, date_two.tm_year,
           (int)difftime(mktime(&date_one), mktime(&date_two)) / (60 * 60 * 24));
}
