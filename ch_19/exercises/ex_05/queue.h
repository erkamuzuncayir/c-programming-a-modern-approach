//
// Created by erkam on 3/20/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100
#include <stdbool.h>

typedef int                Item;
typedef struct queue_type
{
    Item content[100];
    int  empty_slot = 0;
    int  first_item = 0;
    int  item_count = 0;
} *Queue;

void enqueue(Queue *q, Item i);
Item dequeue(Queue *q);
Item get_first(Queue *q);
Item get_last(Queue *q);
bool is_empty(Queue *q);

#endif // QUEUE_H
