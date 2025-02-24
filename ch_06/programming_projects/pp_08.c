//
// Created by erkam on 2/24/25.
//

#include <stdio.h>
int main(void)
{
    int num_of_days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &num_of_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (int j = starting_day; j > 0; j--)
        printf("\t");

    for (int i = 1; i <= num_of_days;)
    {
        if ((i + starting_day) % 7 == 0)
            printf("%d\n", i++);
        else
            printf("%d\t", i++);
    }
}