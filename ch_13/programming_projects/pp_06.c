//
// Created by erkam on 3/11/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char* argv[])
{
    char* planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    int   i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            bool isSame = true;
            char* tempArg = argv[i];
            char* tempPlanet = planets[j];
            while (*tempArg)
            {
                if (toupper(*tempArg) != toupper(*tempPlanet))
                {
                    isSame = false;
                    break;
                }
                tempArg++;
                tempPlanet++;
            }

            if (*tempPlanet != '\0')
                isSame = false;

            if (isSame)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
