//
// Created by erkam on 3/17/25.
//

#include <stdbool.h>
#include <stdio.h>

struct point
{
    int x, y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

int              compute_area(struct rectangle r);
struct point     find_center(struct rectangle r);
struct rectangle move_rectangle(struct rectangle r, int x, int y);
bool             is_contain_point(struct rectangle r, struct point p);

int main(void)
{
    struct point     p1 = {.x = 0, .y = 0};
    struct point     p2 = {.x = 3, .y = 2};
    struct point     p3 = {.x = 5, .y = 4};
    struct rectangle r1 = {.upper_left = p3, .lower_right = p1};

    printf("Area of r1 is %d\n", compute_area(r1));

    struct point center_of_r = find_center(r1);
    printf("Center point of r1 is %d, %d\n", center_of_r.x, center_of_r.y);

    struct rectangle moved_r1 = move_rectangle(r1, p2.x, p2.y);
    printf("r1 is moved to new position, which is from: %d, %d to %d, %d\n", moved_r1.lower_right.x,
           moved_r1.lower_right.y, moved_r1.upper_left.x, moved_r1.upper_left.y);

    printf("r1 is contains p2 = %d\n", is_contain_point(r1, p2));
}


int compute_area(struct rectangle r) { return (r.upper_left.x - r.lower_right.x) * (r.upper_left.y - r.lower_right.y); }

struct point find_center(struct rectangle r)
{
    return (struct point){.x = (r.upper_left.x - r.lower_right.x) / 2 + r.lower_right.x,
                          .y = (r.upper_left.y - r.lower_right.y) / 2 + r.lower_right.y};
}

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    return (struct rectangle){r.upper_left.x + x, r.upper_left.y + y, r.lower_right.x + x, r.lower_right.y + y};
}

bool is_contain_point(struct rectangle r, struct point p)
{
    return p.x >= r.lower_right.x
               ? (p.y >= r.lower_right.y ? (p.x <= r.upper_left.x ? p.y <= r.upper_left.y : true) : false)
               : false;
}
