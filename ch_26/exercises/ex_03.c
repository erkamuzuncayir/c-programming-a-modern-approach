//
// Created by erkam on 3/27/25.
//

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_printf(char* s, ...);

int main(void) { my_printf("%s, %d%s!%d%%", "Hello", -234543, "World", 4322); }

void my_printf(char* s, ...)
{
    char    int_buf[12], str_buf[128];
    char*   str_ptr     = str_buf;
    int     digit_count = 0, char_count = 0;
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
                    int_buf[digit_count++] = arg % 10 + '0';
                    arg /= 10;
                }

                for (int i = digit_count - 1; i >= 0; i--)
                    putchar(int_buf[i]);

                memset(int_buf, '\0', digit_count);
                digit_count = 0;
            }
            else if (*s == 's')
            {
                str_ptr = va_arg(ap, char*);
                while (*(str_ptr + char_count))
                {
                    putchar(*(str_ptr + char_count));
                    char_count++;
                }

                memset(str_buf, '\0', char_count);
                char_count = 0;
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
