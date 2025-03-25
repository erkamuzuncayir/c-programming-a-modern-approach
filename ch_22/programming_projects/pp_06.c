//
// Created by erkam on 3/25/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_ARG_COUNT 1

int main(int argc, char* argv[])
{
    FILE* fp;
    int   ch, byte_count = 0, is_bytes_printed = 0, is_chars_printed = 0;

    if (argc <= DEFAULT_ARG_COUNT)
    {
        printf("usage: pp_06 filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[DEFAULT_ARG_COUNT], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }

    printf("Offset                 Bytes              Characters\n");
    printf("------  --------------------------------  ----------\n");

    fseek(fp, 0L, SEEK_SET);

    while ((ch = getc(fp)) != EOF)
    {
        printf("%6d  ", byte_count);

        int line_byte_count = 0;
        for (line_byte_count = 0; line_byte_count < 10; line_byte_count++)
        {
            if ((ch = getc(fp)) == EOF)
                break;
        }
        line_byte_count++;

        fseek(fp, -(line_byte_count), SEEK_CUR);

        for (int i = 0; i < line_byte_count; i++)
            printf("%02x ", ch = getc(fp));

        printf(" ");
        fseek(fp, -(line_byte_count), SEEK_CUR);

        for (int i = 0; i < line_byte_count; i++)
            printf("%c", isprint(ch = getc(fp)) ? ch : '.');

        byte_count += (line_byte_count - 1);
        printf("\n");
    }


    fclose(fp);
}
