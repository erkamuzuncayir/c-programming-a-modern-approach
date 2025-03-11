//
// Created by erkam on 3/10/25.
//

#include <stdio.h>
#include <string.h>

#define LINE_LENGTH 10

int main(void)
{
    char s1[LINE_LENGTH], s2[LINE_LENGTH];
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    printf("%s\n", s1); // s1 == "computers"
}