//
// Created by erkam on 2/19/25.
//

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour - 12, minute);
    }
    else if (hour == 12)
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
    else
    {
        if (hour == 0)
            printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour + 12, minute);
        else
            printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    }
}