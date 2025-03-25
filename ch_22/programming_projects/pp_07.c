//
// Created by erkam on 3/25/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_ARG_COUNT 1
#define MAX_BYTE_SIZE 255

void compress_file(FILE* source_fp, FILE* compressed_fp);
void uncompress_file(FILE* compressed_fp, FILE* uncompressed_fp);

int main(int argc, char* argv[])
{
    FILE *source_fp, *compressed_fp;

    if (argc <= DEFAULT_ARG_COUNT)
    {
        printf("usage: pp_07 filename\n");
        exit(EXIT_FAILURE);
    }

    if ((source_fp = fopen(argv[DEFAULT_ARG_COUNT], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }

    char compressed_filename[FILENAME_MAX];
    snprintf(compressed_filename, FILENAME_MAX, "%s.rle", argv[DEFAULT_ARG_COUNT]);
    if ((compressed_fp = fopen(compressed_filename, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", compressed_filename);
        fclose(source_fp);
        exit(EXIT_FAILURE);
    }

    compress_file(source_fp, compressed_fp);

    fclose(source_fp);
    fclose(compressed_fp);
    return 0;
}


void compress_file(FILE* source_fp, FILE* compressed_fp)
{
    int prev_ch = -1, ch, char_count = 1;
    while ((ch = getc(source_fp)) != EOF)
    {
        if (ch == prev_ch)
        {
            if (char_count < MAX_BYTE_SIZE)
                char_count++;
            else
            {
                putc(char_count, compressed_fp);
                putc(ch, compressed_fp);
                char_count = 1;
            }
        }
        else
        {
            putc(char_count, compressed_fp);
            putc(ch, compressed_fp);
            char_count = 1;
        }
        prev_ch = ch;
    }

    if (prev_ch != -1)
    {
        putc(char_count, compressed_fp);
        putc(prev_ch, compressed_fp);
    }
}

void uncompress_file(FILE* compressed_fp, FILE* uncompressed_fp)
{
    int char_count, ch;

    while ((char_count = getc(compressed_fp)) != EOF)
    {
        if ((ch = getc(compressed_fp)) == EOF)
        {
            fprintf(stderr, "Unexpected end of file in compressed data\n");
            exit(EXIT_FAILURE);
        }

        for (int i = 0; i < char_count; i++)
            putc(ch, uncompressed_fp);
    }
}

