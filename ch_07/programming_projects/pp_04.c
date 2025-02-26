//
// Created by erkam on 2/26/25.
//

#include <stdio.h>
int main(void)
{
    int c;
    printf("Enter phone number: ");

    while ((c = getchar()) != '\n')
    {
        if (c > 64 && c < 91)
            printf("%d", (c - 63) / 3 + 1);
        else
            printf("%c", c);
    }
}