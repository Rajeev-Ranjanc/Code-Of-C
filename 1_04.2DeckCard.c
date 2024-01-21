/*
b) Modify the deal.c program so that it prints the full names of the cards it deals.
for example:
Input:
Enter number of cards in hand: 5
Output:
Your hand: Seven of Clubs, Two of Spades, Five of Diamonds, Ace of Spades, Two of Hearts
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

// Function to convert card abbreviation to full name
void getCardFullName(char card[3], char fullName[20]) {
    char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    char suits[] = {'C', 'D', 'H', 'S'};
    char rankName[10], suitName[10];

    switch (card[0]) {
        case '2': sprintf(rankName, "Two"); break;
        case '3': sprintf(rankName, "Three"); break;
        case '4': sprintf(rankName, "Four"); break;
        case '5': sprintf(rankName, "Five"); break;
        case '6': sprintf(rankName, "Six"); break;
        case '7': sprintf(rankName, "Seven"); break;
        case '8': sprintf(rankName, "Eight"); break;
        case '9': sprintf(rankName, "Nine"); break;
        case 'T': sprintf(rankName, "Ten"); break;
        case 'J': sprintf(rankName, "Jack"); break;
        case 'Q': sprintf(rankName, "Queen"); break;
        case 'K': sprintf(rankName, "King"); break;
        case 'A': sprintf(rankName, "Ace"); break;
    }

    switch (card[1]) {
        case 'C': sprintf(suitName, "Clubs"); break;
        case 'D': sprintf(suitName, "Diamonds"); break;
        case 'H': sprintf(suitName, "Hearts"); break;
        case 'S': sprintf(suitName, "Spades"); break;
    }

    sprintf(fullName, "%s of %s", rankName, suitName);
}

// Function to deal a specified number of cards
void dealHand(int numCards, char deck[DECK_SIZE][3]) {
    if (numCards < 1 || numCards > DECK_SIZE) {
        printf("Invalid number of cards. Please choose between 1 and %d.\n", DECK_SIZE);
        return;
    }

    printf("Your hand:");

    for (int i = 0; i < numCards; i++) {
        char fullName[20];
        getCardFullName(deck[i], fullName);
        printf(" %s,", fullName);
    }

    printf("\b\n"); // Remove the trailing comma and print a newline
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
