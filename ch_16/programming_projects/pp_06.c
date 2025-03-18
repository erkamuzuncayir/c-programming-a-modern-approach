//
// Created by erkam on 3/17/25.
//

#include <stdio.h>
struct date
{
    int month, day, year;
};

int compare_dates(const struct date d1, const struct date d2);

int main(void)
{
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    const int result = compare_dates(d1, d2);
    if (result < 0)
        printf("%d/%d/%d (d1) is earlier than %d/%d/%d (d2).\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    else if (result > 0)
        printf("%d/%d/%d (d2) is earlier than %d/%d/%d (d1).\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    else
        printf("%d/%d/%d (d1) and %d/%d/%d (d2) are same day.\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
}

int compare_dates(const struct date d1, const struct date d2)
{
    if (d1.year > d2.year)
        return 1;
    else if (d1.year == d2.year)
    {
        if (d1.month > d2.month)
            return 1;
        else if (d1.month == d2.month)
        {
            if (d1.day > d2.day)
                return 1;
            else if (d1.day == d2.day)
                return 0;
            else
                return -1;
        }
        else
            return -1;
    }
    else
        return -1;
}
