//
// Created by erkam on 3/10/25.
//

#include <ctype.h>
#include <stdio.h>

#define LINE_LENGTH 10

void capitalize(char str[]);
void censor(char* str_ptr);

int main(void)
{
    char input[LINE_LENGTH];
    scanf("%s", input);
    printf("input: %s\n", input);
    capitalize(input);
    censor(input);
    printf("capitalized input: %s\n", input);
}

void capitalize(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i++] = toupper(str[i]);
    }
}

void censor(char* str_ptr)
{
    while (*str_ptr != '\0')
    {
        *str_ptr++ = toupper(*str_ptr);
    }
}
