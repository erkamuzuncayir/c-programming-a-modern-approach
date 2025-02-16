//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int first_part = 0, second_part = 0, third_part = 0;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first_part, &second_part, &third_part);

    printf("You entered %d.%d.%d", first_part, second_part, third_part);
}
