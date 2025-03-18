//
// Created by erkam on 3/17/25.
//

#include <stdio.h>

#define HOUR 60

const struct flight
{
    int departure_time;
    int arrival_time;
};

int main(void)
{
    int           hour, minute, total_time_in_minutes;
    struct flight flights[] = {
        {8 * HOUR, 10 * HOUR + 16},  {9 * HOUR + 43, 11 * HOUR + 52},  {11 * HOUR + 19, 13 * HOUR + 31},
        {12 * HOUR + 47, 15 * HOUR}, {14 * HOUR, 16 * HOUR + 8},       {15 * HOUR + 45, 17 * HOUR + 55},
        {19 * HOUR, 21 * HOUR + 20}, {21 * HOUR + 45, 23 * HOUR + 58},
    };

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_time_in_minutes = (hour * 60) + minute;

    for (int i = 0; i < sizeof(flights) / sizeof(flights[0]); i++)
    {
        if (flights[i].departure_time > total_time_in_minutes)
        {
            printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.\n", flights[i].departure_time / HOUR,
                   flights[i].departure_time % HOUR, flights[i].arrival_time / HOUR, flights[i].arrival_time % HOUR);
            break;
        }
    }
}
