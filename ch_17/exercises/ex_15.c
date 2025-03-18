//
// Created by erkam on 3/18/25.
//

#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

//  Solution:
//  Output: "Answer: 3"
//  It pass f2 to f1 and evaluates both of them until f2 will return 0.


int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}
int f1(int (*f)(int))
{
    int n = 0;
    while ((*f)(n))
        n++;
    return n;
}
int f2(int i) { return i * i + i - 12; }
