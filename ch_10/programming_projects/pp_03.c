//
// Created by erkam on 3/2/25.
//

#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external variables */
// int num_in_rank[NUM_RANKS];
// int num_in_suit[NUM_SUITS];
int  hand[NUM_CARDS][2];
bool straight, flush, four, three;
int  pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
    // bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int  rank, suit;
    bool bad_card;
    int  cards_read = 0;

    for (int i = 0; i < NUM_CARDS; i++)
    {
        for (int j = 0; j < 2; j++)
            hand[i][j] = -1;
    }

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0':
                exit(EXIT_SUCCESS);
            case '2':
                rank = 0;
                break;
            case '3':
                rank = 1;
                break;
            case '4':
                rank = 2;
                break;
            case '5':
                rank = 3;
                break;
            case '6':
                rank = 4;
                break;
            case '7':
                rank = 5;
                break;
            case '8':
                rank = 6;
                break;
            case '9':
                rank = 7;
                break;
            case 't':
            case 'T':
                rank = 8;
                break;
            case 'j':
            case 'J':
                rank = 9;
                break;
            case 'q':
            case 'Q':
                rank = 10;
                break;
            case 'k':
            case 'K':
                rank = 11;
                break;
            case 'a':
            case 'A':
                rank = 12;
                break;
            default:
                bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
            case 'c':
            case 'C':
                suit = 0;
                break;
            case 'd':
            case 'D':
                suit = 1;
                break;
            case 'h':
            case 'H':
                suit = 2;
                break;
            case 's':
            case 'S':
                suit = 3;
                break;
            default:
                bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else
        {
            for (int i = 0; i < NUM_CARDS;)
            {
                if (hand[i][RANK] == rank && hand[i][SUIT] == suit)
                {
                    printf("Duplicate card; ignored.\n");
                    i++;
                    break;
                }

                hand[cards_read][RANK] = rank;
                hand[cards_read][SUIT] = suit;
                cards_read++;
                i++;
                break;
            }
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;

    straight = true;
    flush    = true;
    four     = false;
    three    = false;
    pairs    = 0;

    // Sort hand
    for (int i = 1; i < NUM_CARDS; i++)
    {
        for (int j = 0; j < NUM_CARDS - i; j++)
        {
            if (hand[j][RANK] > hand[j + 1][RANK])
            {
                int temp_rank     = hand[j][RANK];
                int temp_suit     = hand[j][SUIT];
                hand[j][RANK]     = hand[j + 1][RANK];
                hand[j][SUIT]     = hand[j + 1][SUIT];
                hand[j + 1][RANK] = temp_rank;
                hand[j + 1][SUIT] = temp_suit;
            }
        }
    }

    /* check for flush */
    suit = hand[0][SUIT];
    for (int i = 0; i < NUM_CARDS; i++)
        if (hand[i][SUIT] != suit)
            flush = false;

    /* check for straight */
    rank = hand[0][RANK];
    for (int i = 1; i < NUM_CARDS; i++)
    {
        if (++rank != hand[i][RANK])
            straight = false;
    }

    if (straight)
        return;

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    rank = hand[0][RANK];
    num_consec = 1;
    for (int i = 1; i < NUM_CARDS; i++)
    {
        if (hand[i][RANK] == rank)
            num_consec++;
        else
        {
            if (num_consec == 4)
                four = true;
            else if (num_consec == 3)
                three = true;
            else if (num_consec == 2)
                pairs++;

            rank = hand[i][RANK];
            num_consec = 1;
        }
    }
    if (num_consec == 4)
        four = true;
    else if (num_consec == 3)
        three = true;
    else if (num_consec == 2)
        pairs++;
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}
