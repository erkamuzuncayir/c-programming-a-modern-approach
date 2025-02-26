//
// Created by erkam on 2/26/25.
//

#include <stdio.h>

int main(void)
{
    float word_count = 0.0f, ch_count = 0.0f;
    char c;

    while ((c = getchar()) != '.')
    {
        if (c == ' ' && ch_count > 0)
            word_count++;
        else
            ch_count++;
    }
    word_count++;

    printf("Average word length: %.1f\n", ch_count / word_count);
}
