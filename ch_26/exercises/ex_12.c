//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <time.h>

time_t return_first_day_of_the_year(int year);

int main(void)
{
    time_t t = return_first_day_of_the_year(2020);
    printf("%s", ctime(&t));
}

time_t return_first_day_of_the_year(int year)
{
    struct tm t = {.tm_sec = 0, .tm_min = 0, .tm_hour = 0, .tm_mday = 1, .tm_mon = 0, .tm_year = year - 1900};
    return mktime(&t);
}
