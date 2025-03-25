//
// Created by erkam on 3/25/25.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEM_COUNT 50

struct date
{
    int month;
    int day;
    int year;
};

struct item
{
    int         num;
    float       price;
    struct date date;
};

int get_item_data_from_file(struct item* inventory);

int main(void)
{
    struct item inventory[MAX_ITEM_COUNT];
    int item_count = get_item_data_from_file(inventory);
    printf("Item   Unit      Purchase    \n");
    printf("       Price     Date    \n");

    for (int i = 0; i < item_count; i++)
    {
        printf("%4d   $%7.2f  %d/%d/%d\n", inventory[i].num, inventory[i].price, inventory[i].date.month,
               inventory[i].date.day, inventory[i].date.year);
    }
}

int get_item_data_from_file(struct item* inventory)
{
    FILE* src_fp;
    char* src_filename = "data.dat";
    int   item_count   = 0, num, month, day, year;
    float price;

    if ((src_fp = fopen(src_filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", src_filename);
        exit(EXIT_FAILURE);
    }

    char item_data[30];
    while ((fgets(item_data, 30, src_fp)) != NULL)
    {
        if (sscanf(item_data, "%d,%f,%d/%d/%d", &num, &price, &month, &day, &year) != 5)
        {
            fprintf(stderr, "Can't get data from %s\n", src_filename);
            break;
        }
        else
        {
            struct item new_item    = {.num = num, .price = price, .date = {.month = month, .day = day, .year = year}};
            inventory[item_count++] = new_item;
        }
    }

    return item_count;
}
