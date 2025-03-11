//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <string.h>
void remove_filename(char* url);

int main(void)
{
    char url[] = "http://www.knking.com/index.html";
    printf("Removed filename of %s is ", url);
    remove_filename(url);
    printf("%s.\n", url);
}

void remove_filename(char* url)
{
    url += strlen(url) - 1;
    while (*url)
    {
        if (*url-- == '/')
        {
            *++url = '\0';
            return;
        }
    }
}
