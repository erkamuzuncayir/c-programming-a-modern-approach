//
// Created by erkam on 3/10/25.
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    strcpy(str, "tire-bouchon"); // str == "tire-bouchon"
    strcpy(&str[4], "d-or-wi"); // str == "abcdd-or-wi"
    strcat(str, "red?"); // str == "abcdered?"
    printf("%s\n", str); // after all of that, str == "tired-or-wired?"
}