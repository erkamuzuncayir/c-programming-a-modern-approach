//
// Created by erkam on 3/20/25.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct queue_type
{
    Item* contents;
    int   empty_slot;
    int   first_item;
    int   item_count;
    int   size;
};

static void terminate(const char* message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error: Memory allocation failed while creating queue!");

    q->contents = malloc(size * sizeof(Item));
    if (q->contents == NULL)
        terminate("Error: Memory allocation failed while creating queue!");

    q->size       = size;
    q->empty_slot = 0;
    q->first_item = 0;
    q->item_count = 0;

    return q;
}

void enqueue(Queue q, Item i)
{
    q->contents[q->empty_slot] = i;

    if (q->item_count == q->size)
        q->first_item = (q->first_item + 1) % q->size;
    else
        q->item_count++;

    q->empty_slot = (q->empty_slot + 1) % q->size;
}

Item dequeue(Queue q)
{
    if (is_empty(q))
        return (Item){-1};

    Item dequeued_item = q->contents[q->first_item];

    q->first_item = (q->first_item + 1) % q->size;
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

    return q->contents[(q->empty_slot - 1 + q->size) % q->size];
}
bool is_empty(Queue q) { return q->item_count == 0 ? true : false; }
void destroy(Queue q) { free(q); }
