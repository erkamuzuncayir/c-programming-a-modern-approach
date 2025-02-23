//
// Created by erkam on 2/22/25.
//

#include <stdio.h>
int main(void)
{
    // Continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;

        printf("%d ", i);
    }

    // Goto
    for (int j = 0; j < 10; j++)
    {
        if (i == 5)
            goto skip;

        printf("%d ", j);

        skip:;
    }
}