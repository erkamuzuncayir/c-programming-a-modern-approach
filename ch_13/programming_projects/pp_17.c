//
// Created by erkam on 3/14/25.
//

#include <stdbool.h>
#include <stdio.h>

#define MESSAGE_LENGTH 30

bool is_palindrome(const char* message);

int main(void)
{
    char message[MESSAGE_LENGTH];

    printf("Enter a message: ");
    scanf("%s", message);

    if (is_palindrome(message))
        printf("%s is palindrome.\n", message);
    else
        printf("%s is not palindrome.\n", message);
}

bool is_palindrome(const char* message)
{
    char* start = message;
    char* end   = message;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start <= end)
    {
        if (*start != *end)
            return false;

        start++;
        end--;
    }

    return true;
}
