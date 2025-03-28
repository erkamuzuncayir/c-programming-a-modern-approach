//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <stdlib.h>


void first(void);
void second(void);

int main(void)
{
    atexit(second);
    atexit(first);
    return 0;
}

void first(void)
{
    printf("That's all, ");
}

void second(void)
{
    printf("folks!\n");
}