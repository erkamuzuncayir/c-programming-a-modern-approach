//
// Created by erkam on 3/24/25.
//

#include <stdio.h>
int main(void)
{
    char str[] = "Product ABC #24,675 is a bestseller";
    char sales_rank[20];

    sscanf(str, "%*[^#]#%[0-9,]", sales_rank);

    printf("Extracted Sales Rank: %s\n", sales_rank);
    return 0;
}
