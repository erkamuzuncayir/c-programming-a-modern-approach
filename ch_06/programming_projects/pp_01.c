//
// Created by erkam on 2/23/25.
//

#include <stdio.h>
int main(void)
{
    float num, largest_num;

    printf("Enter a number: ");
    scanf("%f", &num);
    largest_num = num;
    while (num > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num >= largest_num)
            largest_num = num;
    }
    printf("The largest number is %f\n", largest_num);
    return 0;
}