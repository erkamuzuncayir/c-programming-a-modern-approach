//
// Created by erkam on 3/11/25.
//

#include <stdio.h>

// Solution: Position of the first character in `s` that `t` doesn't have.
int f(char* s, char* t);

int main(void)
{
    char s[] = "abcd";
    char t[] = "bcd"; // 3 for "babc" and 0 for "bcd"
    printf("Return value of %d when %s and %s parameters passed.\n", f(s, t), s, t);
}

int f(char* s, char* t)
{
    char *p1, *p2;
    for (p1 = s; *p1; p1++)
    {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2)
                break;
        if (*p2 == '\0')
            break;
    }
    return p1 - s;
}
