/*
4. a) Write a C program deal.c that deals a random hand from a standard deck of playing
cards, i.e., we pick cards randomly from the deck and avoid picking the same card twice. (In
case you haven't had time to play games recently, each card in a standard deck has a suit -
clubs (C), diamonds (D), hearts (H), or spades (S) and a rank - two (2), three (3), four (4),
five (5), six (6), seven (7), eight (8), nine (9), ten (T), jack (J), queen (Q), king (K), or ace
(A).) We'll have the user to specify how many cards should be in hand, for example:
Input:
Enter number of cards in hand: 5
Output:
Your hand: 7C 2S 5D AS 2H

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52
#define RANKS 13
#define SUITS 4

// Function to initialize a standard deck of cards
void initializeDeck(char deck[DECK_SIZE][3]) {
    char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    char suits[] = {'C', 'D', 'H', 'S'};
    int index = 0;

    for (int i = 0; i < RANKS; i++) {
        for (int j = 0; j < SUITS; j++) {
            snprintf(deck[index], 3, "%c%c", ranks[i], suits[j]);
            index++;
        }
    }
}

// Function to shuffle the deck using Fisher-Yates algorithm
void shuffleDeck(char deck[DECK_SIZE][3]) {
    srand(time(NULL));

    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        // Swap deck[i] and deck[j]
        char temp[3];
        strcpy(temp, deck[i]);
        strcpy(deck[i], deck[j]);
        strcpy(deck[j], temp);
    }
}

// Function to deal a specified number of cards
void dealHand(int numCards, char deck[DECK_SIZE][3]) {
    if (numCards < 1 || numCards > DECK_SIZE) {
        printf("Invalid number of cards. Please choose between 1 and %d.\n", DECK_SIZE);
        return;
    }

    printf("Dealing %d cards:\n", numCards);

    for (int i = 0; i < numCards; i++) {
        printf("%s ", deck[i]);
    }

    printf("\n");
}

int main() {
    char deck[DECK_SIZE][3];
    int numCards;

    // Initialize and shuffle the deck
    initializeDeck(deck);
    shuffleDeck(deck);

    // Get user input for the number of cards to deal
    printf("Enter the number of cards to deal (1-%d): ", DECK_SIZE);
    scanf("%d", &numCards);

    // Deal the specified number of cards
    dealHand(numCards, deck);

    return 0;
}
