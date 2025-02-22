//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    int wind_speed_as_knot;

    printf("Please enter wind speed (in knots): ");
    scanf("%d", &wind_speed_as_knot);

    if (wind_speed_as_knot <= 1)
        printf("Wind is calm.\n");
    else if (wind_speed_as_knot <= 3)
        printf("Wind is light air.\n");
    else if (wind_speed_as_knot <= 27)
        printf("Wind is breeze.\n");
    else if (wind_speed_as_knot <= 47)
        printf("Wind is gale.\n");
    else if (wind_speed_as_knot <= 63)
        printf("Wind is storm.\n");
    else
        printf("Wind is hurricane.\n");
}