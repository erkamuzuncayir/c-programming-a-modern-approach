//
// Created by erkam on 3/21/25.
//

#include <stdio.h>
int count_ones(unsigned char ch);
int count_ones_recursive(unsigned char ch, int count);

int main(void)
{
    unsigned int i = 0x000A;
    printf("1 bit count of 0x%X is: %d\n", i, count_ones(i));
    printf("1 bit count of 0x%X is: %d\n", i, count_ones_recursive(i, 0));
}

// a.
int count_ones(unsigned char ch)
{
    int count = 0;
    while (ch != 0)
    {
        count += ch & 1;
        ch >>= 1;
    }
    return count;
}

// b.
int count_ones_recursive(unsigned char ch, int count)
{
    count += (int)ch & 1;
    ch >>= 1;

    if (ch == 0)
        return count;
    else
        return count_ones_recursive(ch, count);
}
