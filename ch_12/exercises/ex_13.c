//
// Created by erkam on 3/4/25.
//

#define N 5

#include <stdio.h>

int main(void)
{
    double  ident[N][N];
    double* ident_ptr = &ident[0][0];

    int row_count = 0;
    for (int i = 0; i < N * N; i++)
    {
        *ident_ptr = i == row_count * N + row_count ? 1.0 : 0.0;
        printf("%.1f\t", *ident_ptr);

        if ((i + 1) % N == 0)
        {
            printf("\n");
            row_count++;
        }
    }
}
