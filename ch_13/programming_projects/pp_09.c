//
// Created by erkam on 3/11/25.
//

#include <ctype.h>
#include <stdio.h>

#define SENTENCE_LENGTH 30

int compute_vowel_count(const char* sentence);

int main(void)
{
    char sentence[SENTENCE_LENGTH];

    printf("Enter a sentence: ");
    scanf("%s", sentence);

    printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
}

int compute_vowel_count(const char* sentence)
{
    int vowel_count = 0;
    while (*sentence)
    {
        char upperTemp = toupper(*sentence++);
        if (upperTemp == 'A' || upperTemp == 'E' || upperTemp == 'I' || upperTemp == 'O' || upperTemp == 'U')
            vowel_count++;
    }

    return vowel_count;
}
