// EXAM: Form A Q2A (2024). Fill first/last row/col with 1s.
// Efficient version: 4 assignments per loop iteration, no nested loop.
// Corners get written twice but it's harmless.
#include <stdio.h>

#define SIZE 6

void fillBorder(int data[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        data[0][i] = 1;        // top row
        data[SIZE - 1][i] = 1; // bottom row
        data[i][0] = 1;        // left column
        data[i][SIZE - 1] = 1; // right column
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {0};  // zero-init the whole thing
    fillBorder(matrix);
    printMatrix(matrix);
    return 0;
}
