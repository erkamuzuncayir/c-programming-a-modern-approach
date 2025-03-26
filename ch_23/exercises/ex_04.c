//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int is_valid_identifier(const char* str);

int main(void)
{
    char* test_str = "test=";
    if (is_valid_identifier(test_str))
    {
        printf("%s is a valid identifier\n", test_str);
    }
    else
        printf("%s is not a valid identifier\n", test_str);
}

int is_valid_identifier(const char* str)
{
    if (strlen(str) == 0)
        return 0;
    else if (str[0] == '_' || isalpha(str[0]))
    {
        str++;
        while (*str)
        {
            if (!isalnum(*str++))
                return 0;
        }
        return 1;
    }

    return 0;
}
