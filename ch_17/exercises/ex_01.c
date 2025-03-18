//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <stdlib.h>

void* my_malloc(int n);

int main(void)
{
    int n = 56;
    my_malloc(n);
}

void* my_malloc(int n)
{
    void* p = malloc(n);
    if (p == NULL)
    {
        printf("Can't allocate %d bytes of memory. Program terminating!\n", n);
        exit(EXIT_FAILURE);
    }

    printf("%d amount bytes of memory allocated.\n", n);
    return p;
}
