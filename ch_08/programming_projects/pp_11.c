//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#define MAX_DIGIT_COUNT 15
int main(void)
{
    char phone_num[MAX_DIGIT_COUNT];
    int  c, i = 0;

    printf("Enter phone number: ");

    while (i < MAX_DIGIT_COUNT && (c = getchar()) != '\n')
    {
        if (c > 64 && c < 91)
            phone_num[i++] = (c - 63) / 3 + 1 + '0';
        else
            phone_num[i++] = c;
    }

    for (i = 0; i < MAX_DIGIT_COUNT && phone_num[i] != '\0'; i++)
        printf("%c", phone_num[i]);
}
