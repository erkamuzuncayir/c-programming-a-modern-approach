//
// Created by erkam on 3/26/25.
//

#include <stdio.h>
#include <string.h>
#define SENTENCE_LENGTH 100
#define WORD_COUNT 10
#define WORD_LENGTH 20

int main(void)
{
    char sentence[SENTENCE_LENGTH];
    char words[WORD_COUNT][WORD_LENGTH];

    printf("Enter series of words separated by single spaces (max %d words, max %d letter for a word): ", WORD_COUNT,
           WORD_LENGTH);
    fgets(sentence, sizeof(sentence), stdin);

    int   word_count = 0;
    char* p          = strtok(sentence, " \n");

    while (p != NULL)
    {
        strncpy(words[word_count], p, WORD_LENGTH - 1);
        words[word_count][WORD_LENGTH - 1] = '\0';
        word_count++;

        p = strtok(NULL, " \n");
    }

    for (int i = word_count - 1; i >= 0; i--)
        puts(words[i]);
}
