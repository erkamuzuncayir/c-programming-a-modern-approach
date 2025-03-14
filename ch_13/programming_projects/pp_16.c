//
// Created by erkam on 3/14/25.
//

#include <stdio.h>

#define MESSAGE_LENGTH 30

void reverse(char* message);

int main(void)
{
    char message[MESSAGE_LENGTH];

    printf("Enter a message: ");
    scanf("%s", message);
    reverse(message);
    printf("Reversed message: %s", message);
}

void reverse(char* message)
{
    char* start = message;
    char* end = message;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start <= end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
