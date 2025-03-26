//
// Created by erkam on 3/26/25.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
char* my_strdup(const char* s);

int my_stricmp(const char* s1, const char* s2);

char* my_strlwr(char* s);

char* my_strrev(char* s);

char* my_strset(char* s, char ch);

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "HellO";
    printf("Copy of %s is %s\n", s1, my_strdup(s1));

    int is_equal = my_stricmp(s1, s2);
    if (is_equal == 0)
        printf("%s is equal to %s\n", s1, s2);
    else if (is_equal == -1)
        printf("%s is come before than %s\n", s1, s2);
    else
        printf("%s is come after than %s\n", s1, s2);

    printf("All lowered version of %s is, %s\n", s2, my_strlwr(s2));

    char* reversed = my_strrev(s2);
    printf("Reversed version of %s is %s\n", s2, reversed);
    free(reversed);

    printf("Filled with %c version of %s is ", '!', s1);
    printf("%s\n", my_strset(s1, '!'));
}

char* my_strdup(const char* s)
{
    int   size_of_s = strlen(s);
    char* p         = malloc(size_of_s + 1);
    if (p == NULL)
    {
        fprintf(stderr, "Out of memory\n");
        free(p);
        return NULL;
    }
    else
    {
        while (*s != '\0')
            *p++ = *s++;
    }

    return p - size_of_s;
}

int my_stricmp(const char* s1, const char* s2)
{
    char c1, c2;
    while (*s1)
    {
        c1 = tolower(*s1);
        c2 = tolower(*s2);
        if (c1 != c2)
            return c1 < c2 ? -1 : 1;

        s1++;
        s2++;
    }

    if (*s2 != '\0')
        return -1;

    return 0;
}

char* my_strlwr(char* s)
{
    char* p = s;
    while (*p)
    {
        if (*p > 'A' && *p <= 'Z')
            *p += 'a' - 'A';

        p++;
    }

    return s;
}

char* my_strrev(char* s)
{
    int   size_of_s = strlen(s);
    char* p         = malloc(size_of_s + 1);
    if (p == NULL)
    {
        fprintf(stderr, "Out of memory\n");
        free(p);
        return NULL;
    }

    int i = 0;
    while (s[i] != '\0')
    {
        p[size_of_s - 1 - i] = s[i];
        i++;
    }
    p[size_of_s] = '\0';

    return p;
}

char* my_strset(char* s, char ch)
{
    char* p = s;
    while (*p != '\0')
    {
        *p = ch;
        p++;
    }

    return s;
}
