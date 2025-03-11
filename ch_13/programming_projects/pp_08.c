//
// Created by erkam on 3/11/25.
//

#include <ctype.h>
#include <stdio.h>
int compute_scrabble_value(const char* word);

int main(void)
{
    char word[] = "Water";
    printf("Scrabble value of %s is %d", word, compute_scrabble_value(word));
}

int compute_scrabble_value(const char* word)
{
    const int scrabble_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int sum = 0;
    while (*word)
    {
        const char upperTemp = toupper(*word++);
        sum += scrabble_values[upperTemp - 'A'];
    }

    return sum;
}
