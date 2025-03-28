//
// Created by erkam on 3/28/25.
//

#include <stdio.h>
#include <time.h>
int main(void)
{
    char       time_buffer[50];
    time_t     current_time = time(NULL);
    struct tm* current      = localtime(&current_time);

    strftime(time_buffer, sizeof(time_buffer), "%Y-%j", current);
    printf("%s\n", time_buffer);

    strftime(time_buffer, sizeof(time_buffer), "%Y-W%V-%u", current);
    printf("%s\n", time_buffer);

    strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%dT%H:%M:%S", current);
    printf("%s\n", time_buffer);
}
