//
// Created by erkam on 3/26/25.
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch = 'c';
    printf("is %c equal to one of them? %c %c %c: %d\n", ch, 'a', 'b', 'c', strchr("abc", ch) != NULL ? 1 : 0);
}
