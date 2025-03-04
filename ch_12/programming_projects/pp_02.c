//
// Created by erkam on 3/4/25.
//

#define MESSAGE_LENGTH 30
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void is_palindrome_subscript(char message[30]);
void is_palindrome_pointer(char message[30]);

int main(void)
{
    char message[MESSAGE_LENGTH];

    printf("Enter a message: ");

    // a
    is_palindrome_subscript(message);

    // b
    is_palindrome_pointer(message);
}

void is_palindrome_subscript(char message[30])
{
    int  i = 0;
    char ch;

    while ((ch = getchar()) != '\n' && i < MESSAGE_LENGTH)
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
            message[i++] = tolower(ch);
    }

    i--;

    bool isPalindrome = true;
    int  j            = 0;
    while (i >= 0 && i > j)
    {
        if (message[i--] != message[j++])
            isPalindrome = false;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}

void is_palindrome_pointer(char message[30])
{
    char* message_ptr = message;
    char  ch;

    while ((ch = getchar()) != '\n' && message_ptr - message < MESSAGE_LENGTH)
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
            *message_ptr++ = tolower(ch);
    }

    *message_ptr--;

    bool  isPalindrome      = true;
    char* message_start_ptr = message;
    while (message_ptr - message_start_ptr >= 0 && message_ptr > message_start_ptr)
    {
        if (*message_start_ptr++ != *message_ptr--)
            isPalindrome = false;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
