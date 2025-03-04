//
// Created by erkam on 3/4/25.
//

#define MESSAGE_LENGTH 30
#include <stdio.h>

void is_reverse_pointer(char message[30]);

int main(void)
{
    char message[MESSAGE_LENGTH];

    printf("Enter a message: ");

    is_reverse_pointer(message);
}

void is_reverse_pointer(char message[30])
{
    char* message_ptr = message;
    char ch = getchar();

    while (ch != '\n' && message_ptr - message < MESSAGE_LENGTH)
    {
        *message_ptr++ = ch;

        ch = getchar();
    }

    message_ptr--;

    printf("Reversal is: ");

    while (message_ptr - message > 0)
    {
        printf("%c", *message_ptr--);
    }
}
