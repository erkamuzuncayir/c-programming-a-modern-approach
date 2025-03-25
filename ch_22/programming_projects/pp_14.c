//
// Created by erkam on 3/25/25.
//

#define MAX_MESSAGE_LENGTH 80
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt_message(const char* filename, int shift_amount);

int main(void)
{
    char message_filename[FILENAME_MAX];
    char decrypted_message[MAX_MESSAGE_LENGTH] = {'\0'};
    char c;
    int  shift_amount = 0, remaining_letter = MAX_MESSAGE_LENGTH;

    printf("Enter name of file to be encrypted: ");
    scanf("%s", message_filename);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    encrypt_message(message_filename, shift_amount);
}

void encrypt_message(const char* filename, int shift_amount)
{
    FILE *src_fp, *dest_fp;
    int   ch;
    char* decrypted_filename = strcpy(malloc(sizeof(filename) / sizeof(filename[0])), filename);
    decrypted_filename       = strcat(decrypted_filename, ".enc");

    if ((src_fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open message file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    if ((dest_fp = fopen(decrypted_filename, "w")) == NULL)
    {
        fprintf(stderr, "Can't open encrypted message file: %s\n", decrypted_filename);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(src_fp)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
            putc(((ch - 'A') + shift_amount) % 26 + 'A', dest_fp);
        else if (ch >= 'a' && ch <= 'z')
            putc(((ch - 'a') + shift_amount) % 26 + 'a', dest_fp);
        else
            putc(ch, dest_fp);
    }
}
