//
// Created by erkam on 3/19/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 50
#define WORD_LEN 20

int compare_strings(const void* a, const void* b);
int read_line(char str[], int n);

int main(void)
{
    char* words[MAX_WORD];
    char  word_str[WORD_LEN + 1];
    int   count = 0;

    for (;;)
    {
        printf("Enter a word: ");
        read_line(word_str, WORD_LEN);

        if (*word_str == '\0')
            break;

        words[count] = malloc(strlen(word_str) + 1);
        if (words[count] == NULL)
        {
            printf("-- No space left --\n");
            break;
        }

        strcpy(words[count], word_str);
        count++;
    }

    qsort(words, count, sizeof(char*), compare_strings);
    printf("\nIn sorted order:");
    for (int i = 0; i < count; i++)
        printf(" %s", words[i]);

    return 0;
}

int compare_strings(const void* a, const void* b) { return strcmp(*(char**)a, *(char**)b); }

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
