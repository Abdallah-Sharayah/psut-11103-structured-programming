// Sum of a chosen row, sum of a chosen column.
// Key: for row sum, fix i and loop j. For col sum, fix j and loop i.
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

int main() {
    srand(time(0));
    int matrix[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matrix[i][j] = 1 + rand() % 20;
        }
    }
    printMatrix(matrix);

    int row_index;
    printf("Enter a row index: ");
    scanf("%d", &row_index);
    int row_sum = 0;
    for (int j = 0; j < COL; j++) {
        row_sum += matrix[row_index][j];
    }
    printf("Row sum: %d\n", row_sum);

    int col_index;
    printf("Enter a col index: ");
    scanf("%d", &col_index);
    int col_sum = 0;
    for (int i = 0; i < ROW; i++) {
        col_sum += matrix[i][col_index];
    }
    printf("Col sum: %d\n", col_sum);
    return 0;
}
