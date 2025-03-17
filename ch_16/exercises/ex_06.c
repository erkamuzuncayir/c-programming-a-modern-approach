//
// Created by erkam on 3/17/25.
//

#include <stdio.h>

struct time
{
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds);
int         main(void)
{
    long        total_seconds       = 16440;
    struct time time_since_midnight = split_time(total_seconds);
    printf("When %ld seconds passed it means time is %.2d:%.2d:%.2d", total_seconds, time_since_midnight.hours,
           time_since_midnight.minutes, time_since_midnight.seconds);
}

struct time split_time(long total_seconds)
{
    struct time corresponding_time;

    corresponding_time.seconds = total_seconds % 60;
    total_seconds -= corresponding_time.seconds;
    total_seconds /= 60;
    corresponding_time.minutes = total_seconds % 60;
    total_seconds -= corresponding_time.minutes;
    corresponding_time.hours = total_seconds / 60;

    return corresponding_time;
}
