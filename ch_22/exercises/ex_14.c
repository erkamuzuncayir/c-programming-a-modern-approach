//
// Created by erkam on 3/24/25.
//

#include <stdio.h>
#include <stdlib.h>

char* my_fgets(char* s, int n, FILE* stream);
int   my_fputs(const char* s, FILE* stream);

int main(void)
{
    char  str[10];
    FILE* fp;
    char* filename = "ch_22/exercises/filename.txt";
    if ((fp = fopen(filename, "r")) != NULL)
    {
        my_fgets(str, sizeof(str) / sizeof(str[0]), fp);

        fclose(fp);
    }
    else
    {
        printf("Error opening file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(filename, "w")) != NULL)
    {
        my_fputs(str, fp);

        fclose(fp);
    }
    else
    {
        printf("Error opening file: %s\n", filename);
        exit(EXIT_FAILURE);
    }
}

char* my_fgets(char* s, int n, FILE* stream)
{
    const int length = n;
    int       ch     = 0;

    while ((ch = getc(stream)) != EOF)
    {
        if (ch == '\n' || ferror(stream) || n == 0)
        {
            return NULL;
            break;
        }
        else
            *s++ = ch;

        n--;
    }

    return s - length;
}

int my_fputs(const char* s, FILE* stream)
{
    while (*s != '\0')
    {
        if (putc(*s, stream) == EOF)
            return EOF;

        s++;
    }

    return 0;
}
