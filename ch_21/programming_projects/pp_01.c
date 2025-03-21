//
// Created by erkam on 3/21/25.
//

#include <stddef.h>
#include <stdio.h>

struct s
{
    char  a;
    int   b[2];
    float c;
} test;

int main(void)
{
    unsigned long size_of_a              = sizeof(test.a);
    unsigned long size_of_b              = sizeof(test.b);
    unsigned long size_of_c              = sizeof(test.c);
    unsigned long offset_between_s_and_a = offsetof(struct s, a);
    unsigned long offset_between_s_and_b = offsetof(struct s, b);
    unsigned long offset_between_s_and_c = offsetof(struct s, c);

    printf("size of a: %lu\n", size_of_a);
    printf("offset between s and a: %lu\n", offset_between_s_and_a);
    printf("size of b: %lu\n", size_of_b);
    printf("offset between s and b: %lu\n", offset_between_s_and_b);
    printf("size of c: %lu\n", size_of_c);
    printf("offset between s and c: %lu\n", offset_between_s_and_c);

    if (size_of_a < offset_between_s_and_b)
        printf("There is hole in between a and b and size of hole is: %lu bytes.", offset_between_s_and_b - size_of_a);
    if ((size_of_b + offset_between_s_and_b) < offset_between_s_and_c)
        printf("There is hole in between b and c and size of hole is: %lu bytes.",
               offset_between_s_and_c - (size_of_b + offset_between_s_and_b));
}
