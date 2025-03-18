//
// Created by erkam on 3/17/25.
//


#include <stdio.h>

enum
{
    RECTANGLE,
    CIRCLE
};

struct point
{
    int x, y;
};

struct shape
{
    int          shape_kind; /* RECTANGLE or CIRCLE */
    struct point center;     /* coordinates of center */
    union
    {
        struct
        {
            int height, width;
        } rectangle;
        struct
        {
            int radius;
        } circle;
    } u;
} s;

int          compute_area(struct shape s);
struct shape move(struct shape s, int x, int y);
struct shape scale(struct shape s, int c);

int main(void)
{
    struct shape s1 = {.shape_kind = RECTANGLE,
                       .center     = (struct point){.x = 2, .y = 3},
                       .u          = {.rectangle = {.height = 3, .width = 1}}};

    printf("Area of s1 is %d\n", compute_area(s1));

    struct shape moved_s1 = move(s1, 3, 4);
    printf("s1's center was %d, %d and it moved by %d, %d. New center of s1 is %d, %d\n", s1.center.x, s1.center.y, 3,
           4, moved_s1.center.x, moved_s1.center.y);

    struct shape scaled_s1 = scale(s1, 2);
    printf("s1's width and height were %d and %d, and it scaled by %d. New width and height of s1 is %d and %d\n",
           s1.u.rectangle.width, s1.u.rectangle.height, 2, scaled_s1.u.rectangle.width, scaled_s1.u.rectangle.height);
}

int compute_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
        return s.u.rectangle.height * s.u.rectangle.width;
    else
        return 3.14 * s.u.circle.radius * s.u.circle.radius;
}

struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
}

struct shape scale(struct shape s, int c)
{
    if (s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else
        s.u.circle.radius *= c;

    return s;
}
