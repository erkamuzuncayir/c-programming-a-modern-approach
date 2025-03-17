//
// Created by erkam on 3/17/25.
//

#include <stdio.h>

struct date
{
    int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
    struct date d1 = {3, 17, 2025};
    struct date d2 = {3, 16, 2025};
    printf("Day of the year when 3/17/25: %d\n", day_of_year(d1));

    const int result = compare_dates(d1, d2);
    if (result < 0)
        printf("%d/%d/%d (d1) is earlier than %d/%d/%d (d2).\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    else if (result > 0)
        printf("%d/%d/%d (d2) is earlier than %d/%d/%d (d1).\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    else
        printf("%d/%d/%d (d1) and %d/%d/%d (d2) are same day.\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
}

int day_of_year(const struct date d)
{
    int day_counts_of_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count              = d.day;

    for (int i = 0; i < d.month - 1; i++)
        day_count += day_counts_of_months[i];

    if (d.month > 1 && d.year % 4 == 0)
        day_count++;

    return day_count;
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
