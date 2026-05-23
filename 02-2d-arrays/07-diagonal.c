// Square matrix: sum, max, min of the main diagonal.
// One loop, access matrix[i][i] (where row == col).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void printMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand(time(0));
    int matrix[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = 1 + rand() % 9;
        }
    }
    printMatrix(matrix);

    int max = matrix[0][0];
    int min = matrix[0][0];
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (matrix[i][i] > max) max = matrix[i][i];
        if (matrix[i][i] < min) min = matrix[i][i];
        sum += matrix[i][i];
    }
    printf("Sum : %d\n", sum);
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    return 0;
}
