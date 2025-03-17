//
// Created by erkam on 3/17/25.
//

#include <stdio.h>

// Solution:
// Yes, lines below will prints this:
// x:
// x= 3
// y= 4
// y:
// x= 1
// y= 2

int main(void)
{
    struct
    {
        int x, y;
    } x = {3, 4};
    struct
    {
        int x, y;
    } y = {1, 2};

    printf("x:\nx= %d\ny= %d\ny:\nx= %d\ny= %d\n", x.x, x.y, y.x, y.y);
}
