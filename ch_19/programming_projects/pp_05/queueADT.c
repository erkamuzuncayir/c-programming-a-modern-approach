//
// Created by erkam on 3/20/25.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

#define MAX_ITEM 25

struct queue_type
{
    Item contents[MAX_ITEM];
    int  empty_slot;
    int  first_item;
    int  item_count;
};

static void terminate(const char* message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error: Memory allocation failed while creating queue!");

    q->empty_slot = 0;
    q->first_item = 0;
    q->item_count = 0;

    return q;
}

void enqueue(Queue q, Item i)
{
    q->contents[q->empty_slot] = i;

    if (q->item_count == MAX_ITEM)
        q->first_item = (q->first_item + 1) % MAX_ITEM;
    else
        q->item_count++;

    q->empty_slot = (q->empty_slot + 1) % MAX_ITEM;
}

Item dequeue(Queue q)
{
    if (is_empty(q))
        return (Item){-1};

    Item dequeued_item = q->contents[q->first_item];

    q->first_item = (q->first_item + 1) % MAX_ITEM;
    q->item_count--;

    return dequeued_item;
}

Item get_first(Queue q)
{
    if (is_empty(q))
        return (Item){-1};

    return q->contents[q->first_item];
}
Item get_last(Queue q)
{
    if (is_empty(q))
        return (Item){-1};

    return q->contents[(q->empty_slot - 1 + MAX_ITEM) % MAX_ITEM];
}
bool is_empty(Queue q) { return q->item_count == 0 ? true : false; }
void destroy(Queue q) { free(q); }