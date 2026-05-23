// Transpose a 4x5 matrix into a 5x4 matrix.
// Rule: transposed[j][i] = original[i][j]
// Different print function needed because column dimension is part of the type.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COL 5

void printMatrix(int matrix[][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printTransposed(int matrix[][ROW]) {
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand(time(0));
    int matrix[ROW][COL];
    int transposed[COL][ROW];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matrix[i][j] = 1 + rand() % 20;
        }
    }
    printMatrix(matrix);

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    printTransposed(transposed);
    return 0;
}
