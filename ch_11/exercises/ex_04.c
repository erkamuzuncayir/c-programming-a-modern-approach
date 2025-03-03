//
// Created by erkam on 3/3/25.
//

#include <stdio.h>

void swap(int*, int*);

int main(void)
{
    int p = 5, q = 3;
    printf("Before swap p: %d, q: %d\n", p, q);
    swap(&p, &q);
    printf("After swap p: %d, q: %d\n", p, q);
}

void swap(int* p, int* q)
{
    int temp = *p;
    *p       = *q;
    *q       = temp;
}
