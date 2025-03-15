//
// Created by erkam on 3/15/25.
//

#include <stdio.h>

#define STRINGIZE(x) #x
#define MACRO_INDIRECT_STRINGIZE(x) STRINGIZE(x)
#define LINE_FILE "Line " MACRO_INDIRECT_STRINGIZE(__LINE__) " of "__FILE_NAME__

int main(void)
{
    const char* str = LINE_FILE;
    printf("%s\n", str);
}
