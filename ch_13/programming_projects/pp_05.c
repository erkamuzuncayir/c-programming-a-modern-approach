//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    for (int i = argc - 1; i > 1; i--)
        sum += atoi(argv[i]);

    printf("Sum is: %d\n", sum);
}
