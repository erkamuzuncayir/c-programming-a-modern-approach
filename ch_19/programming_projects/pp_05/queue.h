//
// Created by erkam on 3/19/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef int                Item;
typedef struct queue_type* Queue;

Queue create(void);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);
Item get_first(Queue q);
Item get_last(Queue q);
bool is_empty(Queue q);
void destroy(Queue q);


#endif // QUEUE_H
