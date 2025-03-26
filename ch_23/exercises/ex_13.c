//
// Created by erkam on 3/26/25.
//

#include <stdio.h>
#include <string.h>

int count_words(char* sentence);

int main(void)
{
    char str[] = "hello world? how are you?";
    printf("Word amount of in this \"hello world? how are you?\" sentence is: %d\n", count_words(str));
}

int count_words(char* sentence)
{
    int   count = 0;
    char* p     = strtok(sentence, " ");

    while (p != NULL)
    {
        p = strtok(NULL, " ");
        count++;
    }
    return count;
}
