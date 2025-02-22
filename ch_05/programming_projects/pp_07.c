//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    int d1, d2, d3, d4, largest, smallest;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &d1, &d2, &d3, &d4);

    if (d1 >= d2)
    {
        largest  = d1;
        smallest = d2;
    }
    else
    {
        largest  = d2;
        smallest = d3;
    }

    if (d3 > largest)
        largest = d3;
    else if (d3 < smallest)
        smallest = d3;

    if (d4 > largest)
        largest = d4;
    else if (d4 < smallest)
        smallest = d4;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
}
