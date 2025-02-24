//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    float num, e = 1.0f;

    printf("Enter a floating number less than 1: ");
    scanf("%d", &num);

    float factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;

        float addition = 1.0f / factorial;
        if (addition < num)
            e += 1.0f / addition;
        else
        {
            printf("Addition smaller than %d", num);
            break;
        }
    }
    printf("e value: %f\n", e);
}