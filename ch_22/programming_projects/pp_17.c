//
// Created by erkam on 3/25/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct phone_num
{
    int first_three_digit;
    int middle_three_digit;
    int last_four_digit;
};

int get_phone_numbers_data_from_file(struct phone_num* nums);

int main(void)
{
    struct phone_num phone_numbers[50];
    int              num_count = get_phone_numbers_data_from_file(phone_numbers);

    for (int i = 0; i < num_count; i++)
        printf("(%d) %d-%d\n", phone_numbers[i].first_three_digit, phone_numbers[i].middle_three_digit,
               phone_numbers[i].last_four_digit);
}

int get_phone_numbers_data_from_file(struct phone_num* nums)
{
    FILE*       src_fp;
    const char* src_filename = "phones.dat";
    int         number_count = 0;
    char        num_data[50];

    if ((src_fp = fopen(src_filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", src_filename);
        exit(EXIT_FAILURE);
    }

    while (fgets(num_data, sizeof(num_data), src_fp) != NULL)
    {
        int first_three, middle_three, last_four;
        int success = 0;

        // Try different sscanf formats
        if (sscanf(num_data, "%3d.%3d.%4d", &first_three, &middle_three, &last_four) == 3)
            success = 1;
        else if (sscanf(num_data, "(%3d) %3d-%4d", &first_three, &middle_three, &last_four) == 3)
            success = 1;
        else if (sscanf(num_data, "%3d-%3d-%4d", &first_three, &middle_three, &last_four) == 3)
            success = 1;
        else if (sscanf(num_data, "%3d %3d %4d", &first_three, &middle_three, &last_four) == 3)
            success = 1;
        else if (sscanf(num_data, "%3d%3d%4d", &first_three, &middle_three, &last_four) == 3)
            success = 1;

        if (success)
        {
            nums[number_count].first_three_digit  = first_three;
            nums[number_count].middle_three_digit = middle_three;
            nums[number_count].last_four_digit    = last_four;
            number_count++;
        }
        else
        {
            fprintf(stderr, "Invalid phone number format: %s", num_data);
        }
    }


    fclose(src_fp);
    return number_count;
}
