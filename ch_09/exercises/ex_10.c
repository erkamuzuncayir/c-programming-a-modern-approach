//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
int    largest_element(int, int[]);
double average_element(int, int[]);
int    amount_of_positive_elements(int, int[]);

int main(void)
{
    int a[] = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6};
    int n   = sizeof(a) / sizeof(a[0]);
    printf("Largest element is %d\n", largest_element(n, a));
    printf("Average of elements is %.2f\n", average_element(n, a));
    printf("Amount of positive elements is %d\n", amount_of_positive_elements(n, a));
}

int largest_element(int n, int a[])
{
    int largest = a[0];

    for (int i = 0; i < n; i++)
        if (a[i] > largest)
            largest = a[i];

    return largest;
}

double average_element(int n, int a[])
{
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

int amount_of_positive_elements(int n, int a[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            count++;

    return count;
}
