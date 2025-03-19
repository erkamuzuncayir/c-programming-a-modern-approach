//
// Created by erkam on 3/19/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 50
#define WORD_LEN 20

int read_line(char str[], int n);

int main(void)
{
    char* words[MAX_WORD];
    char  word_str[WORD_LEN + 1];
    int   i, j, word_count = 0;

    for (;;)
    {
        printf("Enter a word: ");
        read_line(word_str, WORD_LEN);

        if (*word_str == '\0')
            break;

        for (i = 0; i < word_count; i++)
        {
            if (strcmp(word_str, words[i]) < 0)
                break;
        }

        for (j = word_count; j > i; j--)
            words[j] = words[j - 1];

        words[i] = malloc(strlen(word_str) + 1);
        if (words[i] == NULL)
        {
            printf("-- No space left --\n");
            break;
        }

        strcpy(words[i], word_str);
        word_count++;
    }

    printf("\nIn sorted order:");
    for (i = 0; i < word_count; i++)
        printf(" %s", words[i]);

    return 0;
}


int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
