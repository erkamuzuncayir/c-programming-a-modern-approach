//
// Created by erkam on 3/25/25.
//

#include <stdio.h>

#define MAX_INPUT 50

char* get_month_name(int month);

int main(int argc, char const* argv[])
{
    int month, day, year;
    if (sscanf(argv[1], "%d /%d /%d", &month, &day, &year) == 3)
        printf("%s %d, %d\n", get_month_name(month), day, year);
    else if (sscanf(argv[1], "%d -%d -%d", &month, &day, &year) == 3)
        printf("%s %d, %d\n", get_month_name(month), day, year);
    else
        printf("Date not in the proper form\n");
}

char* get_month_name(int month)
{
    switch (month)
    {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Unknown";
    }
}
