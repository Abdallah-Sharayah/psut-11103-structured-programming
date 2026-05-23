// EXAM: Spring 2024 Q2E pattern. Swap row r1 with row r2.
// One loop across columns, swap with temp.
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

void swapRows(int matrix[ROW][COL], int r1, int r2) {
    for (int j = 0; j < COL; j++) {
        int temp = matrix[r1][j];
        matrix[r1][j] = matrix[r2][j];
        matrix[r2][j] = temp;
    }
}

int main() {
    srand(time(0));
    int matrix[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matrix[i][j] = 1 + rand() % 50;
        }
    }
    printMatrix(matrix);
    swapRows(matrix, 0, 3);
    printMatrix(matrix);
    return 0;
}
