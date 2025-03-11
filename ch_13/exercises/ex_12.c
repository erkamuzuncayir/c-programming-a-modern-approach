//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <string.h>

#define EXTENSION_LENGTH 10

void get_extension(const char* file_name, char* extension);

int main(void)
{
    char file_name[]                 = "test.exe";
    char extension[EXTENSION_LENGTH] = "";
    get_extension(file_name, extension);
    printf("Extension of %s is %s", file_name, extension);
}

void get_extension(const char* file_name, char* extension)
{
    while (*file_name)
    {
        if (*file_name++ == '.')
        {
            strcpy(extension, file_name);
            return;
        }
    }

    strcpy(extension, "");
}
