//
// Created by erkam on 2/28/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define ALPHABET_SIZE 26

void read_word(int []);
bool equal_array(int [], int []);

int main(void)
{
    int  first_word[ALPHABET_SIZE] = {0};
    int  second_word[ALPHABET_SIZE] = {0};

    printf("Enter first word: ");
    read_word(first_word);

    printf("Enter second word: ");
    read_word(second_word);

    if (equal_array(first_word, second_word))
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
}

void read_word(int counts[ALPHABET_SIZE])
{
    char c;
    c = getchar();
    while (isalpha(c))
    {
        counts[tolower(c) - 'a']++;
        c = getchar();
    }
}

bool equal_array(int counts1[ALPHABET_SIZE], int counts2[ALPHABET_SIZE])
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}