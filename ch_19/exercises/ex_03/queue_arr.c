//
// Created by erkam on 3/19/25.
//

#include "queue.h"

#define PUBLIC /* empty */
#define PRIVATE static
#define MAX_ITEM 25

PRIVATE Item queue[MAX_ITEM];
PRIVATE int  empty_slot = 0;
PRIVATE int  first_item = 0;
PRIVATE int  item_count = 0;

PUBLIC void enqueue(Item item)
{
    queue[empty_slot] = item;

    if (item_count == MAX_ITEM)
        first_item = (first_item + 1) % MAX_ITEM;
    else
        item_count++;

    empty_slot = (empty_slot + 1) % MAX_ITEM;
}

PUBLIC Item dequeue()
{
    if (is_empty())
        return (Item){-1};

    Item dequeued_item = queue[first_item];

    first_item = (first_item + 1) % MAX_ITEM;
    item_count--;

    return dequeued_item;
}

PUBLIC Item get_first() { return queue[first_item]; }

PUBLIC Item get_last() { return queue[(empty_slot - 1 + MAX_ITEM) % MAX_ITEM]; }

PUBLIC bool is_empty() { return item_count == 0 ? true : false; }
