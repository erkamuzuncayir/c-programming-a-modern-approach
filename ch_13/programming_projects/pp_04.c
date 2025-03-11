//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
int main(int argc, char* argv[])
{
    for (int i = argc - 1; i > 1; i--)
        printf("%s ", argv[i]);
}
