//
// Created by erkam on 3/17/25.
//

#include <stdio.h>
struct dialing_code
{
    char* country;
    int   code;
} country_codes[] = {{"Argentina", 54},
                     {"Bangladesh", 889},
                     {"Brazil", 55},
                     {"Burma (Myanmar)", 95},
                     {"China", 86},
                     {"Colombia", 57},
                     {"Congo, Dem. Rep. of", 243},
                     {"Egypt", 20},
                     {"Ethiopia", 251},
                     {"France", 33},
                     {"Germany", 49},
                     {"India", 91},
                     {"Indonesia", 62},
                     {"Iran", 98},
                     {"Italy", 39},
                     {"Japan", 81},
                     {"Mexico", 52},
                     {"Nigeria", 234},
                     {"Pakistan", 92},
                     {"Philippines", 63},
                     {"Poland", 48},
                     {"Russia", 7},
                     {"South Africa", 27},
                     {"South Korea", 82},
                     {"Spain", 34},
                     {"Sudan", 249},
                     {"Thailand", 66},
                     {"Turkey", 90},
                     {"Ukraine", 380},
                     {"United Kingdom", 44},
                     {"United States", 1},
                     {"Vietnam", 84}};

int main(void)
{
    int requested_code = -1;

    printf("PLease enter a dialing code: ");
    scanf("%d", &requested_code);

    int is_found = 0;
    for (int i = 0; i < sizeof(country_codes) / sizeof(country_codes[0]); i++)
    {
        if (country_codes[i].code == requested_code)
        {
            is_found = 1;
            printf("%d is the dialing code of %s.\n", requested_code, country_codes[i].country);
            break;
        }
    }

    if (!is_found)
        printf("Can't find a country for dialing code %d.\n", requested_code);
}
