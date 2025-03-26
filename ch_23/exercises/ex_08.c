//
// Created by erkam on 3/26/25.
//

#include <stdio.h>
#include <string.h>
int numchar(const char* s, char ch);

int main(void)
{
    printf("%d\n", numchar("abbb ddbb ddbc", 'b'));
}

int numchar(const char* s, char ch)
{
    int count = -1; // For last incorrect increment
    char* p = s;
    p--;
    do
    {
        p = strchr(p + 1, ch);
        count++;
    }
    while (p != NULL);

    return count;
}
