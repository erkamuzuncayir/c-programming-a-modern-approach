//
// Created by erkam on 3/17/25.
//

#include <stdbool.h>
#include <stdio.h>

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int          getRed(struct color c);
bool         equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{
    struct color c1          = make_color(0, 0, 0);
    struct color c2          = make_color(0, 0, 0);
    struct color c3          = make_color(2, 55, 66);
    struct color brighter_c3 = brighter(c3);
    struct color darker_c3   = darker(c3);

    printf("Red value of c3 is %d\n", getRed(c3));
    printf("c1 and c2 equal = %d\n", equal_color(c1, c2));
    printf("Brighter version of %d, %d, %d is %d, %d, %d\n", c3.red, c3.green, c3.blue, brighter_c3.red,
           brighter_c3.green, brighter_c3.blue);
    printf("Darker version of %d, %d, %d is %d, %d, %d\n", c3.red, c3.green, c3.blue, darker_c3.red, darker_c3.green,
           darker_c3.blue);
}

struct color make_color(int red, int green, int blue)
{
    return (struct color){
        .red   = red < 0     ? 0
                 : red > 255 ? 255
                             : red,
        .green = green < 0     ? 0
                 : green > 255 ? 255
                               : green,
        .blue  = blue < 0     ? 0
                 : blue > 255 ? 255
                              : blue,
    };
}

int getRed(struct color c) { return c.red; }

bool equal_color(struct color color1, struct color color2)
{
    return color1.red == color2.red
               ? (color1.green == color2.green ? (color1.blue == color2.blue ? true : false) : false)
               : false;
}
struct color brighter(struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0)
        return (struct color){3, 3, 3};
    if (c.red < 3)
        c.red = 3;
    if (c.green < 3)
        c.green = 3;
    if (c.blue < 3)
        c.blue = 3;

    struct color brighter_color = {.red = c.red / 0.7, .green = c.green / 0.7, .blue = c.blue / 0.7};

    if (brighter_color.red > 255)
        brighter_color.red = 255;
    if (brighter_color.green > 255)
        brighter_color.green = 255;
    if (brighter_color.blue > 255)
        brighter_color.blue = 255;

    return brighter_color;
}

struct color darker(struct color c)
{
    return (struct color){.red = c.red * 0.7, .green = c.green * 0.7, .blue = c.blue * 0.7};
}
