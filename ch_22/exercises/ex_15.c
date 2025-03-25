//
// Created by erkam on 3/24/25.
//

#include <stdio.h>

#define RECORD_LENGTH 64L

int main(void)
{
    FILE* fp;
    int   n = 5;

    // a
    fseek(fp, n * RECORD_LENGTH, SEEK_SET);

    // b
    fseek(fp, -RECORD_LENGTH, SEEK_END);

    // c
    fseek(fp, +RECORD_LENGTH, SEEK_CUR);

    // d
    fseek(fp, 2 * -RECORD_LENGTH, SEEK_CUR);
}
