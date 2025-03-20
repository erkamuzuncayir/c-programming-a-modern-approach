//
// Created by erkam on 3/20/25.
//

#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue q1, q2;
    int   item;

    q1 = create();
    q2 = create();

    enqueue(q1, 3);
    enqueue(q1, 2);

    item = dequeue(q1);
    printf("dequeued %d from s1\n", item);
    enqueue(q2, item);
    item = dequeue(q1);
    printf("dequeued %d from s1\n", item);
    enqueue(q2, item);

    destroy(q1);

    while (!is_empty(q2))
        printf("dequeued %d from s2\n", dequeue(q2));

    enqueue(q2, 4);
    if (is_empty(q2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(q2);

    return 0;
}
