//
// Created by erkam on 2/28/25.
//

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICE_FACE_COUNT 6

int  roll_dice(void);
bool play_game(void);

int main(void)
{
    int  win_count = 0, lose_count = 0;
    char ch;
    srand((unsigned)time(NULL));

    do
    {
        if (play_game())
        {
            printf("You win!\n");
            win_count++;
        }
        else
        {
            printf("You lose!\n");
            lose_count++;
        }
        printf("Play again?\n");
        scanf(" %c", &ch);
    }
    while (toupper(ch) == 'Y');

    printf("Wins: %2d\tLosses: %2d\n", win_count, lose_count);

    return 0;
}

int roll_dice(void) { return (rand() % DICE_FACE_COUNT) + 1; }

bool play_game(void)
{
    int point = roll_dice() + roll_dice();
    printf("You rolled: %d\n", point);

    if (point == 7 || point == 11)
        return true;
    else if (point == 2 || point == 3 || point == 12)
        return false;
    else
        printf("Your point is %d\n", point);

    while (true)
    {
        int roll_sum = roll_dice() + roll_dice();
        printf("You rolled: %d\n", roll_sum);

        if (roll_sum == point)
            return true;
        else if (roll_sum == 7)
            return false;
    }
}
