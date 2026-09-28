/*
   NUM_SUITS. Deals a random hand of cards.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    // Initializing rand generator seed
    srand(time(NULL));

    int num_cards, rand_suit, rand_rank;

    // A playing card has two elements:
    const char suit[NUM_SUITS] = {'c', 'd', 'h', 's'};
    const char rank[NUM_RANKS] =
        {'2', '3', '4', '5', '6', '7', '8',
         '9', 't', 'j', 'q', 'k', 'a'};

    // No card is at hand at the beginning
    char in_hand[NUM_SUITS][NUM_RANKS] = {false};

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    for (int i = 0; i < num_cards; i++)
    {
        rand_suit = rand() % NUM_SUITS; // 0 - 3
        rand_rank = rand() % NUM_RANKS; // 0 - 12

        // Skip if a card is already in hand
        if (in_hand[rand_suit][rand_rank] == true)
            continue;

        // Mark the new card as used (in hand)
        in_hand[rand_suit][rand_rank] = true;

        printf("%c%c ", rank[rand_rank], suit[rand_suit]);
    }

    printf("\n");

    return 0;
}