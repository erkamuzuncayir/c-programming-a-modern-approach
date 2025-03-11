//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
double compute_average_word_length(const char* sentence);

int main(void)
{
    char sentence[] = "This is good";
    printf("Average word length: %.1f\n", compute_average_word_length(sentence));
}

double compute_average_word_length(const char* sentence)
{
    float word_count = 0.0f, ch_count = 0.0f;

    while (*sentence)
    {
        if (*sentence++ == ' ' && ch_count > 0)
            word_count++;
        else
            ch_count++;
    }
    word_count++;

    return ch_count / word_count;
}
