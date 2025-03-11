//
// Created by erkam on 3/10/25.
//

#include <ctype.h>
#include <stdio.h>

#define LINE_LENGTH 5

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);

int main(void)
{
    char input[LINE_LENGTH];
    int  n = sizeof(input) / sizeof(input[0]);
    read_line_a(input, n);
    read_line_b(input, n);
    read_line_c(input, n);
    read_line_d(input, n);
    puts(input);
}

int read_line_a(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i == 0 && isspace(ch))
            continue;
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int read_line_b(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (isspace(ch))
            break;
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int read_line_c(char str[], int n)
{
    int ch, i = 0;
    while (ch = getchar())
    {
        if (ch == '\n')
        {
            str[i++] = '\\';
            str[i++] = 'n';
            break;
        }
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int read_line_d(char str[], int n)
{
    int ch, i = 0;
    while (i < n && (ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
