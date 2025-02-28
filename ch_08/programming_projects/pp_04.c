//
// Created by erkam on 2/27/25.
//

#include <stdio.h>

int main(void)
{
    int a[10], i;

    printf("Enter 10 numbers: ");
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}