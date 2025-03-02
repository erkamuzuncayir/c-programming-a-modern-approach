//
// Created by erkam on 3/2/25.
//

#define MAX_DIGITS 10
#define SEGMENT_COUNT 7
#define DIGIT_WIDTH 4
#define DIGIT_HEIGHT 3
#define DIGIT_SPACE MAX_DIGITS* DIGIT_WIDTH
#include <ctype.h>
#include <stdio.h>

void clear_digits_array(void);
void process_digit(int, int);
void print_digits_array(void);

int digit_segments[MAX_DIGITS][SEGMENT_COUNT] = {
    {1, 1, 1, 1, 1, 1, 0}, /* 0 */
    {0, 1, 1, 0, 0, 0, 0}, /* 1 */
    {1, 1, 0, 1, 1, 0, 1}, /* 2 */
    {1, 1, 1, 1, 0, 0, 1}, /* 3 */
    {0, 1, 1, 0, 0, 1, 1}, /* 4 */
    {1, 0, 1, 1, 0, 1, 1}, /* 5 */
    {1, 0, 1, 1, 1, 1, 1}, /* 6 */
    {1, 1, 1, 0, 0, 0, 0}, /* 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* 8 */
    {1, 1, 1, 1, 0, 1, 1}  /* 9 */
};

char digits[DIGIT_HEIGHT][DIGIT_SPACE];

int main(void)
{
    char ch;
    int  position = 0;
    clear_digits_array();
    printf("Enter a number (up to 10 digits): ");
    while ((ch = getchar()) != '\n' && position < DIGIT_SPACE)
    {
        if (ch >= '0' && ch <= '9')
        {
            process_digit(ch - '0', position);
            position += DIGIT_WIDTH;
        }
    }
    print_digits_array();
}

void clear_digits_array(void)
{
    for (int row = 0; row < DIGIT_HEIGHT; row++)
    {
        for (int col = 0; col < DIGIT_SPACE; col++)
            digits[row][col] = ' ';
    }
}

void process_digit(int digit, int position)
{
    int row_pos = 0, col_pos = 0;
    for (int segment = 0; segment < SEGMENT_COUNT; segment++)
    {
        if (digit_segments[digit][segment])
        {
            switch (segment)
            {
                case 0:
                    row_pos = 0;
                    col_pos = 1;
                    break;
                case 1:
                    row_pos = 1;
                    col_pos = 2;
                    break;
                case 2:
                    row_pos = 2;
                    col_pos = 2;
                    break;
                case 3:
                    row_pos = 2;
                    col_pos = 1;
                    break;
                case 4:
                    row_pos = 2;
                    col_pos = 0;
                    break;
                case 5:
                    row_pos = 1;
                    col_pos = 0;
                    break;
                case 6:
                    row_pos = 1;
                    col_pos = 1;
                    break;
            }

            digits[row_pos][col_pos + position] = segment % 3 == 0 ? '_' : '|';
        }
    }
}
void print_digits_array(void)
{
    for (int row = 0; row < DIGIT_HEIGHT; row++)
    {
        for (int col = 0; col < DIGIT_SPACE; col++)
            printf("%c", digits[row][col]);

        printf("\n");
    }
}
