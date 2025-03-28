//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <time.h>

int main(void)
{
    int       n;
    struct tm date = {date.tm_sec = date.tm_min = date.tm_hour = date.tm_mday = date.tm_mon = date.tm_wday = 0};

    printf("Please enter month, day and year and a number: ");
    scanf("%d %d %d %d", &date.tm_mon, &date.tm_mday, &date.tm_year, &n);

    date.tm_mday += n;
    mktime(&date);

    printf("Date will be %d/%d/%d when %d day passed.\n", date.tm_mon, date.tm_mday, date.tm_year, n);
}
