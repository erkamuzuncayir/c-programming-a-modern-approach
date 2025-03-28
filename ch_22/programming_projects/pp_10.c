//
// Created by erkam on 3/25/25.
//

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* inventory2.c (Chapter 17, page 434) */
/* Maintains a parts database (linked list version) */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25

struct part
{
    int          number;
    char         name[NAME_LEN + 1];
    int          on_hand;
    struct part* next;
};

struct part* inventory = NULL; /* points to first part */

struct part* find_part(int number);
void         insert(void);
void         search(void);
void         update(void);
void         print(void);
int          read_line(char str[], int n);
void         save(void);
void         load(void);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
    char code;

    for (;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n') /* skips to end of line */
            ;
        switch (code)
        {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'd':
                save();
                break;
            case 'r':
                load();
                break;
            case 'q':
                return 0;
            default:
                printf("Illegal code\n");
        }
        printf("\n");
    }
}

/**********************************************************
 * find_part: Looks up a part number in the inventory     *
 *            list. Returns a pointer to the node         *
 *            containing the part number; if the part     *
 *            number is not found, returns NULL.          *
 **********************************************************/
struct part* find_part(int number)
{
    struct part* p;

    for (p = inventory; p != NULL && number > p->number; p = p->next)
        ;
    if (p != NULL && number == p->number)
        return p;
    return NULL;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         inventory list; the list remains sorted by     *
 *         part number. Prints an error message and       *
 *         returns prematurely if the part already exists *
 *         or space could not be allocated for the part.  *
 **********************************************************/
void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL)
    {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number)
    {
        printf("Part already exists.\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
    int          number;
    struct part* p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL)
    {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    }
    else
        printf("Part not found.\n");
}

/**********************************************************
 * update: Prompts the user to enter a part number.       *
 *         Prints an error message if the part doesn't    *
 *         exist; otherwise, prompts the user to enter    *
 *         change in quantity on hand and updates the     *
 *         database.                                      *
 **********************************************************/
void update(void)
{
    int          number, change;
    struct part* p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    }
    else
        printf("Part not found.\n");
}

/**********************************************************
 * print: Prints a listing of all parts in the database,  *
 *        showing the part number, part name, and         *
 *        quantity on hand. Part numbers will appear in   *
 *        ascending order.                                *
 **********************************************************/
void print(void)
{
    struct part* p;

    printf("Part Number   Part Name                  "
           "Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}

void save(void)
{
    FILE*        dest_fp;
    char*        dest_filename = "inventory.dat";
    struct part* ptr           = inventory;
    if ((dest_fp = fopen(dest_filename, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", dest_filename);
        exit(EXIT_FAILURE);
    }

    while (ptr != NULL)
    {
        if (fwrite(ptr, sizeof(struct part), 1, dest_fp) != 1)
        {
            fprintf(stderr, "Error saving inventory data\n");
            fclose(dest_fp);
            return;
        }
        ptr = ptr->next;
    }

    fclose(dest_fp);
    printf("Inventory saved.\n");
}

void load(void)
{
    FILE*        source_fp;
    char*        source_filename = "inventory.dat";
    struct part *new_node, *last = NULL;

    if ((source_fp = fopen(source_filename, "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", source_filename);
        exit(EXIT_FAILURE);
    }

    // Clear the current inventory
    while (inventory != NULL)
    {
        struct part* temp = inventory;
        inventory         = inventory->next;
        free(temp);
    }

    while (1)
    {
        new_node = malloc(sizeof(struct part));
        if (new_node == NULL)
        {
            fprintf(stderr, "Memory allocation error\n");
            fclose(source_fp);
            return;
        }

        if (fread(new_node, sizeof(struct part), 1, source_fp) != 1)
        {
            free(new_node); // Avoid memory leak on last failed read
            break;
        }

        new_node->next = NULL;

        if (inventory == NULL)
            inventory = new_node;
        else
            last->next = new_node;

        last = new_node;
    }

    fclose(source_fp);
    printf("Inventory loaded.\n");
}
