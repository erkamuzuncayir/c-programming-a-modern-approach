//
// Created by erkam on 3/14/25.
//
#define MAX_WORD_LENGTH 20
#define MAX_WORD_COUNT 30

#include <stdio.h>

void get_input(char sentence[30][20], int* word_count, int* letter_count, char* punctuation);
void print_reverse(char sentence[30][20], char punctuation, int* word_count, int* letter_count);

int main(void)
{
    char sentence[MAX_WORD_COUNT][MAX_WORD_LENGTH];

    int  word_count;
    int  letter_count;
    char punctuation;
    get_input(sentence, &word_count, &letter_count, &punctuation);

    print_reverse(sentence, punctuation, &word_count, &letter_count);
}

void get_input(char sentence[][MAX_WORD_LENGTH], int* word_count, int* letter_count, char* punctuation)
{
    *word_count   = 0;
    *letter_count = 0;
    *punctuation  = '.';
    printf("Enter a sentence: ");
    char c = getchar();
    while (c != '\n')
    {
        if (c == '!' || c == '.' || c == '?')
        {
            *punctuation = c;
        }
        else if (c == ' ')
        {
            sentence[(*word_count)][(*letter_count)] = '\0';
            (*word_count)++;
            *letter_count = 0;
        }
        else
            sentence[(*word_count)][(*letter_count)++] = c;

        c = getchar();
    }

    // For the last word
    sentence[(*word_count)][(*letter_count)] = '\0';
    (*word_count)++;
}

void print_reverse(char sentence[][MAX_WORD_LENGTH], char punctuation, int* word_count, int* letter_count)
{
    printf("Reversal of sentence: ");
    while (*word_count >= 0)
    {
        *letter_count = 0;
        while (sentence[(*word_count)][(*letter_count)] != '\0')
            printf("%c", sentence[(*word_count)][(*letter_count)++]);

        (*word_count)--;
        if (*word_count >= 0)
            printf(" ");
    }
    printf("%c\n", punctuation);
}
