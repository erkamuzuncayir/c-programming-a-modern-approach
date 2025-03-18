//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <stdlib.h>
int* create_array(int n, int initial_value);

int main(void)
{
    int  n = 5, initial_value = 24;
    int* i_a = create_array(n, initial_value);

    printf("Initial value of %d amount of elements should be %d.\n", n, initial_value);
    for (int i = 0; i < n; i++)
        printf("%d ", i_a[i]);
}

int* create_array(int n, int initial_value)
{
    int* p = malloc(n * sizeof(*p));

    if (p == NULL)
        return NULL;

    for (int i = 0; i < n; i++)
        p[i] = initial_value;

    return p;
}
