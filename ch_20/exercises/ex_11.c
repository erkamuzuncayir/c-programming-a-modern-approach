//
// Created by erkam on 3/21/25.
//

#include <stdio.h>

#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4

// Solution:
// Previous version of if-clause doesn't work because bitwise operators' precedence is lower than equality operator.
// Bitwise operations needs parentheses for work correctly.

int main(void)
{
    int key_code = 0x0002;
    if ((key_code & SHIFT_BIT) | (key_code & CTRL_BIT ) | (key_code & ALT_BIT) == 0)
        printf("No modifier keys pressed\n");
}
