//
// Created by erkam on 3/27/25.
//

#include <stdio.h>
#include <stdlib.h>

int mbcheck(const char* s);

int main(void)
{
    printf("%d\n", mbcheck("\x05\x87\x80\x36\xed\xaa"));    // -1
    printf("%d\n", mbcheck("\x20\xe4\x50\x88\x3f"));        // -1
    printf("%d\n", mbcheck("\xde\xad\xbe\xef"));            // -1
    printf("%d\n", mbcheck("\x8a\x60\x92\x74\x41"));        // -1

}

int mbcheck(const char* s)
{
    int n;
    for (mblen(NULL, 0);; s += n)
        if ((n = mblen(s, MB_CUR_MAX)) <= 0)
            return n;
}

