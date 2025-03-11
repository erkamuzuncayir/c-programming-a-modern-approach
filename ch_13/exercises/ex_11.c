//
// Created by erkam on 3/10/25.
//

#include <stdio.h>

int strcmp(char* s, char* t);
int main(void)
{
    char str_one[] = {'a', 'b', 'c', '\0'};
    char str_two[] = {'a', 'b', 'c', 'd', 'e', '\0'};

    printf("%d", strcmp(str_one, str_two));
}

int strcmp(char* s, char* t)
{
    while (*s && *s== *t)
    {
        s++;
        t++;
    }

    return *s - *t;
}
