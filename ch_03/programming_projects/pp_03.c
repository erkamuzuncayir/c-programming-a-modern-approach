//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int gs1_prefix = 0, group_identifier = 0, publisher_code = 0, item_number = 0, check_digit = 0;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
}
