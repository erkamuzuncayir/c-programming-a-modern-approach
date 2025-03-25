//
// Created by erkam on 3/24/25.
//

#include <stdio.h>
#include <stdlib.h>
int line_length(const char* filename, int n);

int main(void) { printf("Line length of %d. length is: %d", 2, (line_length("ch_22/exercises/filename.txt", 3))); }

int line_length(const char* filename, int n)
{
    FILE* fp;
    int   ch    = 0;
    int   count = 0;
    if ((fp = fopen(filename, "r")) != NULL)
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == '\n')
            {
                n--;
                ch = fgetc(fp);
            }

            if (n == 1)
                count++;
        }

        fclose(fp);
    }
    else
    {
        printf("Error opening file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    return count;
}
