//
// Created by erkam on 2/26/25.
//

#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int vowel_count = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n')
    {
        c = toupper(c);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowel_count++;
    }

    printf("Your sentence contains %d vowels.", vowel_count);

}