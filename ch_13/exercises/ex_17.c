//
// Created by erkam on 3/11/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool test_extension(const char* file_name, const char* extension);

int main(void)
{
    char file_name[] = "test.exe";
    char extension[] = "ExE";
    printf("Extension of %s is %s, is it true: %d", file_name, extension, test_extension(file_name, extension));
}

bool test_extension(const char* file_name, const char* extension)
{
    file_name += strlen(file_name) - 1;
    extension += strlen(extension) - 1;
    while (*file_name)
    {
        if (toupper(*extension--) != toupper(*file_name--))
            return false;
        if (*file_name == '.')
            return true;
    }
}
