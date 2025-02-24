//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int num;
    float e = 1.0f;

    printf("Enter a num: ");
    scanf("%d", &num);

    float factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;

        e += 1.0f / factorial;
    }
    printf("e value: %f\n", e);
}