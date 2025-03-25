//
// Created by erkam on 3/26/25.
//

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 10000

int compare_ints(const void* p, const void* q);

int main(int argc, char* argv[])
{
    FILE* src_fp;
    int   buffer[BUFFER_SIZE] = {0};
    int   lowest = INT_MAX, highest = INT_MIN;

    if (argc != 2)
    {
        fprintf(stderr, "usage: pp_18 source\n");
        exit(EXIT_FAILURE);
    }

    if ((src_fp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int num_count = 0, temp;
    while (num_count < BUFFER_SIZE && fscanf(src_fp, "%d ", &temp) != EOF)
    {
        if (temp < lowest)
            lowest = temp;
        if (temp > highest)
            highest = temp;

        buffer[num_count] = temp;
        num_count++;
    }

    qsort(buffer, num_count, sizeof(int), compare_ints);

    printf("All numbers: ");
    for (int i = 0; i < num_count; i++)
        printf("%d ", buffer[i]);

    printf("\nLowest: %d", lowest);
    printf("\nMedian: %d",
           num_count % 2 == 0 ? ((buffer[num_count / 2] + buffer[num_count / 2 - 1] - 1) / 2) : buffer[num_count / 2]);
    printf("\nHighest: %d", buffer[num_count - 1]);

    fclose(src_fp);
    return 0;
}

int compare_ints(const void* p, const void* q) { return *(int*)p - *(int*)q; }
