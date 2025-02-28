//
// Created by erkam on 2/28/25.
//

#define MAX_WORD_LENGTH 10
#define MAX_WORD_COUNT 10
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char sentence[MAX_WORD_COUNT][MAX_WORD_LENGTH];
    char c, punctuation = '.';
    int word_count = 0, letter_count = 0;

    printf("Enter a sentence: ");
    c = getchar();
    while (c != '\n')
    {
        if (c == '!' || c == '.' || c == '?')
        {
            punctuation = c;
        }
        else if (c == ' ')
        {
            sentence[word_count][letter_count] = '\0';
            word_count++;
            letter_count = 0;
        }
        else
            sentence[word_count][letter_count++] = c;

        c = getchar();
    }

    // For the last word
    word_count++;
    sentence[word_count][letter_count] = '\0';

    printf("Reversal of sentence: ");
    while (word_count >= 0)
    {
        letter_count = 0;
        while (sentence[word_count][letter_count] != '\0')
            printf("%c", sentence[word_count][letter_count++]);

        word_count--;
        if (word_count >= 0)
            printf(" ");
    }
    printf("%c\n", punctuation);
}
