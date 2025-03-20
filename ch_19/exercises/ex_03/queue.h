//
// Created by erkam on 3/19/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef int Item;

void enqueue(Item item);
Item dequeue();
Item get_first();
Item get_last();
bool is_empty();

#endif // QUEUE_H
