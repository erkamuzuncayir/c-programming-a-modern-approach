//
// Created by erkam on 3/10/25.
//

#include <stdio.h>
void censor(char* str_ptr);

int main(void)
{
    char str[] = {'f', 'o', 'o', 'd', 'f', 'o', 'o', 'l', '\0'};
    printf("input: %s\n", str);
    censor(str);
    printf("censored input: %s\n", str);
}

void censor(char* str_ptr)
{
    do
    {
        if (*str_ptr == 'f' || *str_ptr == 'o')
            *str_ptr = 'x';
    }
    while (*str_ptr++ != '\0');
}
