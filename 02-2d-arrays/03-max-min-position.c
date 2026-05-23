// Find max and min in a matrix, AND track their positions.
// Note: initialize max/min to matrix[0][0], not 0.
// Also: initialize EACH position variable separately (C trap: `int a,b,c=0` only inits c).
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
            matrix[i][j] = 1 + rand() % 99;
        }
    }
    printMatrix(matrix);

    int max = matrix[0][0];
    int min = matrix[0][0];
    int maxrow = 0, maxcol = 0, minrow = 0, mincol = 0;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxrow = i;
                maxcol = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minrow = i;
                mincol = j;
            }
        }
    }
    printf("Max = %d at position [%d][%d]\n", max, maxrow, maxcol);
    printf("Min = %d at position [%d][%d]\n", min, minrow, mincol);
    return 0;
}
