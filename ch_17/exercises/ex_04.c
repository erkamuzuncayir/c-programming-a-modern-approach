//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x, y;
};
struct rectangle
{
    struct point upper_left, lower_right;
};
struct rectangle* p;

int main(void)
{
    if ((p = malloc(sizeof(struct rectangle))) == NULL)
    {
        printf("Error, malloc failed.");
        exit(EXIT_FAILURE);
    }

    p->lower_right.x = 20;
    p->lower_right.y = 15;
    p->upper_left.x  = 10;
    p->upper_left.y  = 25;

    printf("p the rectangle's upper left coordinates are %d, %d and lower left coordinates are %d, %d.\n",
           p->upper_left.x, p->upper_left.y, p->lower_right.x, p->lower_right.y);
}