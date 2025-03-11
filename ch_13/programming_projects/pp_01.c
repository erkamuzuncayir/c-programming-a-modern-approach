//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <string.h>
#define LETTER_LENGTH 21

void find_smallest_largest_words(char* smallest_word, char* largest_word);

int main(void)
{
    char smallest_word[LETTER_LENGTH];
    char largest_word[LETTER_LENGTH];

    find_smallest_largest_words(smallest_word, largest_word);
    printf("Smallest word is %s, largest word is %s.\n", smallest_word, largest_word);
}

void find_smallest_largest_words(char* smallest_word, char* largest_word)
{
    char word[LETTER_LENGTH];
    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
    while (strlen(word) != 4)
    {
        if (strcmp(smallest_word, word) > 0)
            strcpy(smallest_word, word);
        if (strcmp(largest_word, word) < 0)
            strcpy(largest_word, word);

        printf("Enter word: ");
        scanf("%s", word);
    }
}
