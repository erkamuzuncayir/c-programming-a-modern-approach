//
// Created by erkam on 2/28/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define ALPHABET_SIZE 26
int main(void)
{
    int  letter_counts[ALPHABET_SIZE] = {0};
    char c;

    printf("Enter first word: ");
    c = getchar();
    while (isalpha(c))
    {
        letter_counts[tolower(c) - 'a']++;
        c = getchar();
    }

    printf("Enter second word: ");
    c = getchar();
    while (isalpha(c))
    {
        letter_counts[tolower(c) - 'a']--;
        c = getchar();
    }

    bool isAnagram = true;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (letter_counts[i] > 0)
            isAnagram = false;
    }

    if (isAnagram)
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
}
