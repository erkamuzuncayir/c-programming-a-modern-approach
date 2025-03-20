//
// Created by erkam on 3/20/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define PUBLIC /* empty */
#define PRIVATE static

PRIVATE struct node
{
    Item         item;
    struct node* next;
} *head = NULL, *tail = NULL;

PUBLIC void enqueue(Item item)
{
    struct node* prev_tail = tail;
    tail                   = malloc((sizeof(struct node)));
    if (tail == NULL)
    {
        printf("Error: Memory allocation failed.");
        exit(EXIT_FAILURE);
    }

    if (prev_tail != NULL)
        prev_tail->next = tail;
    if (head == NULL)
        head = tail;

    tail->item = item;
    tail->next = NULL;
}

PUBLIC Item dequeue()
{
    if (is_empty())
        return (Item){-1};
    struct node* prev_head     = head;
    Item         dequeued_item = head->item;
    head                       = head->next;

    if (head == NULL)
        tail = NULL;

    free(prev_head);
    return dequeued_item;
}

PUBLIC Item get_first()
{
    if (is_empty())
    {
        printf("Error: Queue is empty.\n");
        return (Item){-1};
    }
    return head->item;
}

PUBLIC Item get_last()
{
    if (is_empty())
    {
        printf("Error: Queue is empty.\n");
        return (Item){-1};
    }
    return tail->item;
}

PUBLIC bool is_empty() { return head == NULL; }
