//
// Created by erkam on 2/26/25.
//

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int  hour, minute;
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

    printf("Equivalent 24-hour time: %d:%d", hour, minute);
}