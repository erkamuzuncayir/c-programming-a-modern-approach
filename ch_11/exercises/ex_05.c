//
// Created by erkam on 3/3/25.
//

#include <stdio.h>
void split_time(long total_sec, int* hr, int* min, int* sec);

int main(void)
{
    long total_sec = 13765;
    int  hour, min, sec;
    split_time(total_sec, &hour, &min, &sec);
    printf("%ld Second since midnight means the time is %d:%d:%d\n", total_sec, hour, min, sec);
}

void split_time(long total_sec, int* hr, int* min, int* sec)
{
    *sec = total_sec % 60;
    total_sec -= *sec;
    total_sec /= 60;
    *min = total_sec % 60;
    total_sec -= *min;
    *hr = total_sec / 60;
}
