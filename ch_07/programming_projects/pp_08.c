//
// Created by erkam on 2/26/25.
//

//
// Created by erkam on 2/19/25.
//

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int  hour, minute, total_time_in_minutes;
    char time_char;

    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &time_char);

    if (toupper(time_char) == 'P')
    {
        if (hour != 12)
            hour += 12;
    }
    else if (toupper(time_char) == 'A')
    {
        if (hour == 12)
            hour = 0;
    }

    total_time_in_minutes = (hour * 60) + minute;

    if (total_time_in_minutes <= ((8 * 60) + (103 / 2)))
        printf("Closest departure time is 8:00 AM., arriving at 10:16 AM");
    else if (total_time_in_minutes < ((9 * 60) + 43) + (96 / 2))
        printf("Closest departure time is 9:43 AM., arriving at 11:52 AM");
    else if (total_time_in_minutes < ((11 * 60) + 19) + (88 / 2))
        printf("Closest departure time is 11:19 AM., arriving at 1:31 PM");
    else if (total_time_in_minutes <= ((12 * 60) + 47) + (73 / 2))
        printf("Closest departure time is 12:47 PM., arriving at 3:00 PM");
    else if (total_time_in_minutes <= ((14 * 60) + (105 / 2)))
        printf("Closest departure time is 2:00 PM., arriving at 4:08 PM");
    else if (total_time_in_minutes <= ((15 * 60) + 45) + (195 / 2))
        printf("Closest departure time is 3:45 PM., arriving at 5:55 PM");
    else if (total_time_in_minutes <= ((19 * 60) + (165 / 2)))
        printf("Closest departure time is 7:00 PM., arriving at 9:20 PM");
    else
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM");
}
