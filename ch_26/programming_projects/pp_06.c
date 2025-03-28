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

    strftime(time_buffer, sizeof(time_buffer), "%A, %B %d, %Y %I:%M%p", current);
    printf("%s\n", time_buffer);

    strftime(time_buffer, sizeof(time_buffer), "%a, %d %b %y %H:%M", current);
    printf("%s\n", time_buffer);

    strftime(time_buffer, sizeof(time_buffer), "%m/%d/%y %I:%M:%S %p", current);
    printf("%s\n", time_buffer);
}
