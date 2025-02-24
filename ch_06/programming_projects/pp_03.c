//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int num_one, num_two, temp;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num_one, &num_two);

    int m = num_one;
    int n = num_two;

    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }

    printf("In lowest terms: %d/%d\n", num_one / m, num_two / m);
}