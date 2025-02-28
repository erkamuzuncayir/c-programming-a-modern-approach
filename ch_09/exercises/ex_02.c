//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int check(int, int, int);

int main(void)
{
    printf("%d", check(2, 3, 4));
}

int check(int x, int y, int n)
{
    if (x >= 0 && x <= n -1 && y >= 0 && y <= n -1)
        return 1;

    return 0;
}
