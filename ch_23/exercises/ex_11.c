//
// Created by erkam on 3/26/25.
//

#include <stdio.h>
#include <string.h>

void set_last_n_char(char* s, int n, char c);

int main(void)
{
    char test[] = "abcdefgh";
    printf("Before set %s\n", test);
    set_last_n_char(test, 4, '!');
    printf("After set %s\n", test);
}

void set_last_n_char(char* s, int n, char c)
{
    memset(&s[strlen(s)-n], c, n);
}
