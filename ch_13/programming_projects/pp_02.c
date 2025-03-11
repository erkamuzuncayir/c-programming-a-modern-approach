//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char time_str[20], msg_str[MSG_LEN + 1];
    int  month, day, hour, minute, i, j, num_remind = 0;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter month/day, 24-hour time (hh:mm) and reminder: ");
        scanf("%2d / %2d %d : %d", &month, &day, &hour, &minute);
        if (month == 0 || day == 0)
            break;
        if (day < 0 || day > 31)
        {
            printf("Invalid day.\n");
            continue;
        }
        if (month < 0 || month > 12)
        {
            printf("Invalid month.\n");
            continue;
        }
        sprintf(time_str, "%2d\t\t%2d %2d:%2d", month, day, hour, minute);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(time_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], time_str);
        strcat(reminders[i], "\t");
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nMonth\tDay\t\t\tReminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
