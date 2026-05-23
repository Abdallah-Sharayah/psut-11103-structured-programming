// EXAM: Form A Q2C (2024). Return 1 if every row contains each digit 0..SIZE-1 exactly once.
// Triple nested loop: outer = row, middle = target digit, inner = walk row counting.
// Early exit with return 0 as soon as any row fails.
#include <stdio.h>

#define SIZE 5

int rowsHaveUniqueDigits(int data[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {        // each row
        for (int d = 0; d < SIZE; d++) {    // each target digit 0..SIZE-1
            int count = 0;
            for (int j = 0; j < SIZE; j++) {
                if (data[i][j] == d) count++;
            }
            if (count != 1) return 0;       // row i is broken
        }
    }
    return 1;                                // all rows valid
}

int main() {
    int good[SIZE][SIZE] = {
        {0, 1, 2, 3, 4},
        {1, 2, 3, 4, 0},
        {2, 3, 4, 0, 1},
        {3, 4, 0, 1, 2},
        {4, 0, 1, 2, 3}
    };
    int bad[SIZE][SIZE] = {
        {0, 1, 2, 3, 4},
        {1, 1, 3, 4, 0},   // row 1: two 1s, no 2 — fails
        {2, 3, 4, 0, 1},
        {3, 4, 0, 1, 2},
        {4, 0, 1, 2, 3}
    };
    printf("Good: %s\n", rowsHaveUniqueDigits(good) ? "yes" : "No");
    printf("Bad:  %s\n", rowsHaveUniqueDigits(bad) ? "yes" : "No");
    return 0;
}
