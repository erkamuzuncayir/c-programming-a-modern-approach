//
// Created by erkam on 3/25/25.
//

#define HOUR 60
#include <stdio.h>
#include <stdlib.h>

const struct flight
{
    int dep_hour;
    int dep_min;
    int arr_hour;
    int arr_min;
};

int get_phone_numbers_data_from_file(struct flight* nums);

int main(void)
{
    int           hour, minute, total_time_in_minutes;
    struct flight flights[50];
    int           flight_count = get_phone_numbers_data_from_file(flights);

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_time_in_minutes = (hour * 60) + minute;

    for (int i = 0; i < flight_count; i++)
    {
        if (flights[i].dep_hour * HOUR + flights[i].dep_min > total_time_in_minutes)
        {
            printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.\n", flights[i].dep_hour,
                   flights[i].dep_min, flights[i].arr_hour, flights[i].arr_min);
            break;
        }
    }
}

int get_phone_numbers_data_from_file(struct flight* nums)
{
    FILE* src_fp;
    char* src_filename = "flights.dat";
    int   flight_count = 0, dep_hour, dep_min, arr_hour, arr_min;

    if ((src_fp = fopen(src_filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", src_filename);
        exit(EXIT_FAILURE);
    }

    char item_data[30];
    while ((fgets(item_data, 30, src_fp)) != NULL)
    {
        if (sscanf(item_data, "%2d:%2d %2d:%2d", &dep_hour, &dep_min, &arr_hour, &arr_min) != 4)
        {
            fprintf(stderr, "Can't get data from %s\n", src_filename);
            break;
        }
        else
        {
            struct flight flight = {.dep_hour = dep_hour, .dep_min = dep_min, .arr_hour = arr_hour, .arr_min = arr_min};
            nums[flight_count++] = flight;
        }
    }

    return flight_count;
}
