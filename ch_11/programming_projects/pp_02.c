//
// Created by erkam on 3/3/25.
//

#define FLIGHT_COUNT 8
#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int* departure_time, int* arrival_time);

int departure_times[FLIGHT_COUNT] = {8 * 60,  9 * 60 + 45,  11 * 60 + 19, 12 * 60 + 47,
                                     14 * 60, 15 * 60 + 45, 19 * 60,      21 * 60 + 45};

int arrival_times[FLIGHT_COUNT] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
                                   16 * 60 + 8,  17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

int main(void)
{
    int hour, minute, user_time, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    user_time = hour * 60 + minute;

    find_closest_flight(user_time, &departure_time, &arrival_time);

    printf("The closest flight departs after %d minutes from midnight, arrives after %d minutes from midnight.\n",
           departure_time, arrival_time);

    return 0;
}

void find_closest_flight(int desired_time, int* departure_time, int* arrival_time)
{
    int closest_flight_index = -1, time_diff = -1;
    int closest_time_diff = 24 * 60 + 1; // Impossible time difference
    for (int i = 0; i < FLIGHT_COUNT; i++)
    {
        time_diff = (abs)(departure_times[i] - desired_time);
        if (time_diff < closest_time_diff)
        {
            closest_time_diff    = time_diff;
            closest_flight_index = i;
        }
    }

    *departure_time = departure_times[closest_flight_index];
    *arrival_time   = arrival_times[closest_flight_index];
}
