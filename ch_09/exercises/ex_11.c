//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#define GRADE_A 4
#define GRADE_B 3
#define GRADE_C 2
#define GRADE_D 1
#define GRADE_F 0

float compute_GPA(char[], int);

int main(void)
{
    char grades[] = {'A', 'B', 'C', 'D', 'F', 'A'};
    int  n        = sizeof(grades) / sizeof(grades[0]);

    printf("GPA is %.2f", compute_GPA(grades, n));
}

float compute_GPA(char grades[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        switch (grades[i])
        {
            case 'A':
                sum += GRADE_A;
                break;
            case 'B':
                sum += GRADE_B;
                break;
            case 'C':
                sum += GRADE_C;
                break;
            case 'D':
                sum += GRADE_D;
                break;
            case 'F':
                sum += GRADE_F;
                break;
        }
    }

    return sum / n;
}
