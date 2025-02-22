//
// Created by erkam on 2/19/25.
//

#include <stdio.h>
int main(void)
{
    int i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one"); // Prints this
        case 2: printf("two"); // Prints this
    }
}