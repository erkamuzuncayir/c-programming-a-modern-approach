//
// Created by erkam on 3/27/25.
//

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_printf(char* s, ...);

int main(void) { my_printf("Hello, %dworld!%d%%", -234543, 4322); }

void my_printf(char* s, ...)
{
    char    buf[12];
    int     digit_count     = 0;
    bool    is_divisor_seen = false;
    va_list ap;
    va_start(ap, s);

    while (*s != '\0')
    {
        if (is_divisor_seen)
        {
            if (*s == 'd')
            {
                int arg = va_arg(ap, int);

                if (arg < 0)
                    putchar('-');

                arg = abs(arg);

                while (arg != 0)
                {
                    buf[digit_count++] = arg % 10 + '0';
                    arg /= 10;
                }

                for (int i = digit_count - 1; i >= 0; i--)
                    putchar(buf[i]);

                memset(buf, '\0', digit_count);
                digit_count = 0;
            }
                is_divisor_seen = false;
        }
        else if (*s == '%')
            is_divisor_seen = true;
        else
            putchar(*s);

        s++;
    }

    va_end(ap);
}
