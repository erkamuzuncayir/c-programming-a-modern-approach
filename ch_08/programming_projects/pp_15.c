//
// Created by erkam on 2/28/25.
//


#define MAX_MESSAGE_LENGTH 80
#include <stdio.h>

int main(void)
{
    char message[MAX_MESSAGE_LENGTH]           = {'\0'};
    char decrypted_message[MAX_MESSAGE_LENGTH] = {'\0'};
    char c;
    int  shift_amount = 0, remaining_letter = MAX_MESSAGE_LENGTH;

    printf("Enter message to be encrypted: ");

    c = getchar();
    for (int i = 0; i < remaining_letter && c != '\n'; i++)
    {
        message[i] = c;
        c          = getchar();
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    for (int i = 0; message[i] != '\0'; i++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
            decrypted_message[i] = ((message[i] - 'A') + shift_amount) % 26 + 'A';
        else if (message[i] >= 'a' && message[i] <= 'z')
            decrypted_message[i] = ((message[i] - 'a') + shift_amount) % 26 + 'a';
        else
            decrypted_message[i] = message[i];
    }

    printf("Encrypted message: ");
    for (int i = 0; decrypted_message[i] != '\0'; i++)
        printf("%c", decrypted_message[i]);
}
