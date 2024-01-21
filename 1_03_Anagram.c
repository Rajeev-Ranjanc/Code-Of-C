/*
3. Write a C program that test whether two words are anagrams (permutations of the same
letters). Note: Nested loops are not allowed. Users should ignore any characters that aren't
letters, and both should treat upper-case letters in the same way as lower-case letters.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int areAnagrams(const char *word1, const char *word2) {
    int count1[26] = {0};  // Assuming only alphabetic characters are considered (case-insensitive)
    int count2[26] = {0};

    // Count occurrences of each letter in the first word
    for (int i = 0; word1[i] != '\0'; i++) {
        if (isalpha(word1[i])) {
            count1[tolower(word1[i]) - 'a']++;
        }
    }

    // Count occurrences of each letter in the second word
    for (int i = 0; word2[i] != '\0'; i++) {
        if (isalpha(word2[i])) {
            count2[tolower(word2[i]) - 'a']++;
        }
    }

    // Compare the counts of each letter
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    char word1[100], word2[100];

    printf("Enter the first word: ");
    scanf("%s", word1);

    printf("Enter the second word: ");
    scanf("%s", word2);

    if (areAnagrams(word1, word2)) {
        printf("%s and %s are anagrams.\n", word1, word2);
    } else {
        printf("%s and %s are not anagrams.\n", word1, word2);
    }

    return 0;
}
