//
// Created by erkam on 3/10/25.
//

#include <stdio.h>
int main(void)
{
    int  i, j;
    char s[20];

    scanf("%d%s%d", &i, s, &j);
    printf("i: %d, j: %d, s:", i, j); // i: 12, j: 56, s:abc34
    puts(s);
}
