//
// Created by erkam on 3/14/25.
//

#define NELEMS(a) ((int)(sizeof(a) / sizeof(a[0])))
#include <stdio.h>

int main(void)
{
    int ten_element_array[10];
    printf("Number of elements in ten_element_array is: %d\n", NELEMS(ten_element_array));
}