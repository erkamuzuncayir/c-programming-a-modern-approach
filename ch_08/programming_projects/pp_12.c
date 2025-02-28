//
// Created by erkam on 2/28/25.
//

#include <ctype.h>
#include "stdio.h"
#define ALPHABET_LENGTH
int main(void)
{
    int values[ALPHABET_LENGTH] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int c, sum = 0;

    printf("Enter a word: ");

    while ((c = getchar()) != '\n')
        sum += values[toupper(c) - 'A'];

    printf("Scrabble value: %d", sum);
}
