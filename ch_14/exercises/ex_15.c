//
// Created by erkam on 3/15/25.
//

#include <stdio.h>
int main(void)
{
#if defined(ENGLISH)
    printf("Insert Disk 1");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1");
#elif defined(SPANISH)
    printf("Inserte El Disco 1")
#endif
}
