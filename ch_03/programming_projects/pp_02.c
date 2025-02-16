//
// Created by erkam on 2/16/25.
//

#include <stdio.h>

int main(void)
{
    int item_number = 0, date_day = 0, date_month = 0, date_year = 0;
    float unit_price = 0.0f;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date_month, &date_day, &date_year);

    printf("Item\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDay\n");
    printf("%d\t\t$%7.2f\t\t%d/%d/%d\n", item_number, unit_price, date_month, date_day, date_year);
}
