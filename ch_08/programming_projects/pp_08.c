//
// Created by erkam on 2/28/25.
//

#include <stdio.h>
#define STUDENT_COUNT 5
#define QUIZ_COUNT 5

int main(void)
{
    int students[STUDENT_COUNT][QUIZ_COUNT];

    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        printf("Enter grades of %d. student: ", i + 1);
        for (int j = 0; j < QUIZ_COUNT; j++)
            scanf("%d", &students[i][j]);
    }

    printf("Student\tTotal\tAverage\n");
    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        int student_total_score = 0;
        for (int j = 0; j < QUIZ_COUNT; j++)
            student_total_score += students[i][j];

        printf("%d\t\t%d\t\t%.2f\n", i + 1, student_total_score, (float)student_total_score / QUIZ_COUNT);
    }

    printf("\n");

    printf("Quiz\tAverage\tHigh\tLow\n");
    for (int j = 0; j < QUIZ_COUNT; j++)
    {
        int quiz_total_score    = 0;
        int quiz_high_score = students[0][j];
        int quiz_low_score  = students[0][j];
        for (int i = 0; i < STUDENT_COUNT; i++)
        {
            if (students[i][j] > quiz_high_score)
                quiz_high_score = students[i][j];
            else
                quiz_low_score = students[i][j];

            quiz_total_score += students[i][j];
        }

        printf("%d\t\t%.2f\t%d\t\t%d\n", j + 1, (float)quiz_total_score / STUDENT_COUNT, quiz_high_score, quiz_low_score);
    }

    printf("\n");
}
