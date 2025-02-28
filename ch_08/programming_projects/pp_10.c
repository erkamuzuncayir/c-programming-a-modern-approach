//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#include <stdlib.h>
#define FLIGHT_COUNT 8

int main(void)
{
    int hour, minute, user_time, closest_flight_index = -1, time_diff = -1;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    user_time = hour * 60 + minute;

    int departure_times[FLIGHT_COUNT] = {8 * 60,  9 * 60 + 45,  11 * 60 + 19, 12 * 60 + 47,
                                         14 * 60, 15 * 60 + 45, 19 * 60,      21 * 60 + 45};

    int arrival_times[FLIGHT_COUNT] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
                                       16 * 60 + 8,  17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};


    int closest_time_diff = 24 * 60 + 1; // Impossible time difference
    for (int i = 0; i < FLIGHT_COUNT; i++)
    {
        time_diff = (abs)(departure_times[i] - user_time);
        if (time_diff < closest_time_diff)
        {
            closest_time_diff    = time_diff;
            closest_flight_index = i;
        }
    }

    printf("The closest flight departs at %.2d:%.2d, arriving at %.2d:%.2d.",
           departure_times[closest_flight_index] / 60, departure_times[closest_flight_index] % 60,
           arrival_times[closest_flight_index] / 60, arrival_times[closest_flight_index] % 60);

    return 0;
}
