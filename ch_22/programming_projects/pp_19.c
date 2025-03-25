//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unix_to_windows(FILE* src_fp, FILE* dst_fp);
void windows_to_unix(FILE* src_fp, FILE* dst_fp);
int  main(int argc, char* argv[])
{
    FILE* src_fp;
    FILE* dst_fp;

    if (argc != 4)
    {
        fprintf(stderr, "usage: pp_19 source destination -win or -unix\n");
        exit(EXIT_FAILURE);
    }

    if ((src_fp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        fclose(src_fp);
        exit(EXIT_FAILURE);
    }


    if ((dst_fp = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        fclose(dst_fp);
        exit(EXIT_FAILURE);
    }

    if (strcmp(argv[3], "-win") == 0)
        unix_to_windows(src_fp, dst_fp);
    else if (strcmp(argv[3], "-unix") == 0)
        windows_to_unix(src_fp, dst_fp);
    else
    {
        fprintf(stderr, "Invalid option. Use -win or -unix.\n");
        fclose(src_fp);
        fclose(dst_fp);
        exit(EXIT_FAILURE);
    }

    fclose(src_fp);
    fclose(dst_fp);

    return 0;
}

void unix_to_windows(FILE* src_fp, FILE* dst_fp)
{
    char ch;
    while ((ch = getc(src_fp)) != EOF)
    {
        if (ch == '\x0a')
            putc('\x0d', dst_fp);

        putc(ch, dst_fp);
    }
}

void windows_to_unix(FILE* src_fp, FILE* dst_fp)
{
    char ch;
    while ((ch = getc(src_fp)) != EOF)
    {
        if (ch == '\x0d')
            continue;

        putc(ch, dst_fp);
    }
}
