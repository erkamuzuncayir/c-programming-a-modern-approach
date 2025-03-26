//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    char ch;
    int  word_count = 0;
    bool punct_seen = false;

    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
        {
            punct_seen = true;
        }
        else if (punct_seen)
        {
            if (isspace(ch))
            {
                word_count++;
                punct_seen = false;
            }
        }
    }

    printf("Word count is %d", word_count);
    return 0;
}
