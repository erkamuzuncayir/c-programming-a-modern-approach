//
// Created by erkam on 2/19/25.
//

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int age = 15;
    _Bool teenager = (age >= 13) && (age <= 19) ? true : false;

    printf("%d", teenager);
}