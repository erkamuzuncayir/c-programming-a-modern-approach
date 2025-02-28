//
// Created by erkam on 2/28/25.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW_COUNT 10
#define COL_COUNT 10
#define DIRECTION_COUNT 4
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
    char area[ROW_COUNT][COL_COUNT];
    bool occupied_area[ROW_COUNT][COL_COUNT];
    bool direction_movable[DIRECTION_COUNT] = {true, true, true, true};

    int  alphabet_length = 26;
    char walker          = 'A';

    for (int i = 0; i < ROW_COUNT; i++)
    {
        for (int j = 0; j < COL_COUNT; j++)
            area[i][j] = '.';
    }

    for (int i = 0; i < ROW_COUNT; i++)
    {
        for (int j = 0; j < COL_COUNT; j++)
            occupied_area[i][j] = false;
    }

    srand((unsigned)time(NULL));

    int pos_x = rand() % ROW_COUNT;
    int pos_y = rand() % COL_COUNT;

    area[pos_x][pos_y]          = walker;
    occupied_area[pos_x][pos_y] = true;

    while (alphabet_length > 1)
    {
        int step = rand() % DIRECTION_COUNT;

        // Clockwise movement
        if (step == UP)
        {
            if (pos_y - 1 >= 0 && !occupied_area[pos_x][pos_y - 1])
            {
                alphabet_length--;
                pos_y--;
                walker++;
                area[pos_x][pos_y]          = walker;
                occupied_area[pos_x][pos_y] = true;
                direction_movable[UP] = true;
            }
            else
                direction_movable[UP] = false;
        }
        else if (step == RIGHT)
        {
            if (pos_x + 1 < ROW_COUNT - 1 && !occupied_area[pos_x + 1][pos_y])
            {
                alphabet_length--;
                pos_x++;
                walker++;
                area[pos_x][pos_y]          = walker;
                occupied_area[pos_x][pos_y] = true;
                direction_movable[RIGHT] = true;
            }
            else
                direction_movable[RIGHT] = false;
        }
        else if (step == DOWN)
        {
            if (pos_y + 1 < COL_COUNT - 1 && !occupied_area[pos_x][pos_y + 1])
            {
                alphabet_length--;
                pos_y++;
                walker++;
                area[pos_x][pos_y]          = walker;
                occupied_area[pos_x][pos_y] = true;
                direction_movable[DOWN] = true;
            }
            else
                direction_movable[DOWN] = false;
        }
        else if (step == LEFT)
        {
            if (pos_x - 1 >= 0 && !occupied_area[pos_x - 1][pos_y])
            {
                alphabet_length--;
                pos_x--;
                walker++;
                area[pos_x][pos_y]          = walker;
                occupied_area[pos_x][pos_y] = true;
                direction_movable[LEFT] = true;
            }
            else
                direction_movable[LEFT] = false;
        }

        bool isMovable = false;
        for (int i = 0; i < DIRECTION_COUNT; i++)
            if (direction_movable[i])
                isMovable = true;

        if (!isMovable)
            break;
    }

    for (int i = 0; i < ROW_COUNT; i++)
    {
        for (int j = 0; j < COL_COUNT; j++)
            printf("%c ", area[i][j]);

        printf("\n");
    }
}
