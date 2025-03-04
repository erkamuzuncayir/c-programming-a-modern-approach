//
// Created by erkam on 3/4/25.
//

#include <stdio.h>
int main(void)
{
    int  temperatures[7][24] = {[3][22] = 32};
    int  row                 = 3;
    int* temperatures_i_ptr  = &temperatures[row][0];
    int  size_of_row         = sizeof(temperatures[row]) / sizeof(temperatures[row][0]);

    for (int i = 0; i < size_of_row; i++)
    {
        printf("%d ", *temperatures_i_ptr++);
    }
}
