//
// Created by erkam on 3/25/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100
#define DEFAULT_ARG_COUNT 1

struct part
{
    int  number;
    char name[NAME_LEN + 1];
    int  on_hand;
} src_part_one, src_part_two;


int main(int argc, char* argv[])
{
    FILE *src_fp_one, *src_fp_two, *dest_fp;
    int   read_num_one, read_num_two;

    if (argc < DEFAULT_ARG_COUNT + 3)
    {
        fprintf(stderr, "usage: %s source_file1 source_file2 dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((src_fp_one = fopen(argv[DEFAULT_ARG_COUNT], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT]);
        exit(EXIT_FAILURE);
    }
    if ((src_fp_two = fopen(argv[DEFAULT_ARG_COUNT + 1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT + 1]);
        exit(EXIT_FAILURE);
    }
    if ((dest_fp = fopen(argv[DEFAULT_ARG_COUNT + 2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[DEFAULT_ARG_COUNT + 2]);
        exit(EXIT_FAILURE);
    }

    read_num_one = fread(&src_part_one, sizeof(struct part), 1, src_fp_one);
    read_num_two = fread(&src_part_two, sizeof(struct part), 1, src_fp_two);

    while (read_num_one == 1 && read_num_two == 1)
    {
        if (src_part_one.number < src_part_two.number)
        {
            fwrite(&src_part_one, sizeof(struct part), 1, dest_fp);
            read_num_one = fread(&src_part_one, sizeof(struct part), 1, src_fp_one);
        }
        else if (src_part_one.number > src_part_two.number)
        {
            fwrite(&src_part_two, sizeof(struct part), 1, dest_fp);
            read_num_two = fread(&src_part_two, sizeof(struct part), 1, src_fp_two);
        }
        else
        {
            if (strcmp(src_part_one.name, src_part_two.name) != 0)
            {
                fprintf(
                    stderr,
                    "Names are doesn't matches for parts, one using %s, other one using %s\n. Using first name %s\n",
                    src_part_one.name, src_part_two.name, src_part_one.name);
            }
            src_part_one.on_hand += src_part_two.on_hand;
            fwrite(&src_part_one, sizeof(struct part), 1, dest_fp);
            read_num_one = fread(&src_part_one, sizeof(struct part), 1, src_fp_one);
            read_num_two = fread(&src_part_two, sizeof(struct part), 1, src_fp_two);
        }
    }

    while (read_num_one == 1)
    {
        fwrite(&src_part_one, sizeof(struct part), 1, dest_fp);
        read_num_one = fread(&src_part_one, sizeof(struct part), 1, src_fp_one);
    }

    while (read_num_two == 1)
    {
        fwrite(&src_part_two, sizeof(struct part), 1, dest_fp);
        read_num_two = fread(&src_part_two, sizeof(struct part), 1, src_fp_two);
    }

    fclose(src_fp_one);
    fclose(src_fp_two);
    fclose(dest_fp);
    return 0;
}
