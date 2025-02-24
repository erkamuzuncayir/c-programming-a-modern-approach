//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i += 2)
        printf("%d\n", i * i);
}