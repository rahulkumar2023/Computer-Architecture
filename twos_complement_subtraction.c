#include <stdio.h>
#include <limits.h>

// Function to check if x - y overflows in two's complement
int subtract2sc_issafe(int x, int y) {
    // Determine int size dynamically
    int intMax = (1 << (sizeof(int) * 8 - 1)) - 1;
    int intMin = -(1 << (sizeof(int) * 8 - 1));

    // Subtraction overflow check
    if ((x > 0 && y < 0 && x - y < 0) ||  // Positive - Negative -> Should remain positive
        (x < 0 && y > 0 && x - y > 0)) {  // Negative - Positive -> Should remain negative
        return 0;  // Overflow occurred
    }

    return 1;  // No overflow
}
