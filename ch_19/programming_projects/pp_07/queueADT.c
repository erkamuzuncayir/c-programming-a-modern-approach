//
// Created by erkam on 3/20/25.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct queue_type
{
    struct node* head;
    struct node* tail;
    int          len;
};

struct node
{
    Item         item;
    struct node* next;
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

    q->head = NULL;
    q->tail = NULL;
    q->len  = 0;

    return q;
}

void enqueue(Queue q, Item i)
{
    struct node* prev_tail = q->tail;
    q->tail                = malloc(sizeof(struct node));
    if (q->tail == NULL)
        terminate("Error: Memory allocation failed while enqueue!");

    if (prev_tail != NULL)
        prev_tail->next = q->tail;
    else
        q->head = q->tail;

    q->tail->item = i;
    q->tail->next = NULL;
    q->len++;
}

Item dequeue(Queue q)
{
    if (is_empty(q))
        return (Item){-1};

    struct node* prev_head     = q->head;
    Item         dequeued_item = q->head->item;
    q->head                    = q->head->next;

    if (q->head == NULL)
        q->tail = NULL;

    free(prev_head);
    q->len--;

    return dequeued_item;
}

Item get_first(Queue q)
{
    if (is_empty(q))
    {
        printf("Error: Queue is empty.\n");
        return (Item){-1};
    }
    return q->head->item;
}
Item get_last(Queue q)
{
    if (is_empty(q))
    {
        printf("Error: Queue is empty.\n");
        return (Item){-1};
    }
    return q->tail->item;
}
bool is_empty(Queue q) { return q->head == NULL; }
void destroy(Queue q)
{
    while (!is_empty(q))
        dequeue(q);

    free(q);
}
