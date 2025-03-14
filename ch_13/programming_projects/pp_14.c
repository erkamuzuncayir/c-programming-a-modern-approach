//
// Created by erkam on 3/14/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define WORD_LENGTH 20

bool are_anagrams(const char* word1, const char* word2);

int main(void)
{
    char first_word[WORD_LENGTH], second_word[WORD_LENGTH];


    printf("Enter first word: ");
    scanf("%s", first_word);

    printf("Enter second word: ");
    scanf("%s", second_word);

    if (are_anagrams(first_word, second_word))
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
}

bool are_anagrams(const char* word1, const char* word2)
{
    int sum = 0;
    while (*word1)
    {
        sum += tolower(*word1++);
        sum -= tolower(*word2++);
    }

    if (sum != 0 || *word2 != '\0')
        return false;

    return true;
}
