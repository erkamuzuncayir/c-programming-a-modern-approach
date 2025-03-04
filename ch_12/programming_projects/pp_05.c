//
// Created by erkam on 3/4/25.
//

#include <stdio.h>

#define MAX_WORD_LENGTH 10
#define MAX_WORD_COUNT 10

int main(void)
{
    char  sentence[MAX_WORD_COUNT * MAX_WORD_LENGTH];
    char* sentence_ptr = sentence;
    char  c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n')
        *sentence_ptr++ = c;

    int word_length = 0;
    printf("Reversal of sentence: ");
    while (--sentence_ptr - sentence >= 0)
    {
        if (*sentence_ptr == ' ' || sentence_ptr == sentence)
        {
            for (int i = 0; i < word_length; i++)
                printf("%c", *(sentence_ptr + i));

            word_length = 0;
        }

        word_length++;
    }
}
