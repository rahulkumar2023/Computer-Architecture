#include <stdio.h>

int main() {
    int lines = 0, words = 0, chars = 0;
    int in_word = 0; // Flag to track if inside a word
    int c, prev_c = ' '; // Initialize prev_c as space to handle first word correctly

    while ((c = getchar()) != EOF) {
        chars++; // Count every character

        // Count lines
        if (c == '\n') {
            lines++;
        }

        // Check if character is a word separator
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                words++; // Count word when transitioning from word to separator
                in_word = 0; // Mark as outside word
            }
        } else {
            in_word = 1; // Mark as inside word
        }

        prev_c = c; // Update previous character
    }

    // If last character was part of a word, count the last word
    if (in_word) {
        words++;
    }

    // Print output with correct formatting
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", chars);

    return 0;
}

