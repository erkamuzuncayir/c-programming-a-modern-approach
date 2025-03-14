//
// Created by erkam on 3/14/25.
//

#include <stdio.h>
int main(void)
{
    const char* months[] = {"January", "February", "March",     "April",   "May",      "June",
                            "July",    "August",   "September", "October", "November", "December"};
    int         day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d /%2d /%4d", &month, &day, &year);

    printf("You entered the date %s %2d, %4d.\n", months[month - 1], day, year);
}
