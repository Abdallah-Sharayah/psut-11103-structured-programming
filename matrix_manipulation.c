#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define row 5
#define col 5

void printMatrix(int matrix[][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/*void printTransposed(int matrix[][row]) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
*/

void swapRows(int matrix[row][col], int r1, int r2) {

    for(int i = 0; i < col; i++) {
        int temp = matrix[r1][i];
        matrix[r1][i] = matrix[r2][i];
        matrix[r2][i] = temp;
    }

}

int main() {
    srand(time(0));
    int matrix[row][col];

    

    printMatrix(matrix);

    swapRows(matrix, 0, 3);
    printMatrix(matrix);



    /*
    Transpose a 2D array

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printTransposed(transposed);

    */
    return 0;
}




/*
Fill a 4×5 matrix with random numbers 1..99. Print it. Then find the maximum value AND its position (row, col).
    int max = matrix[0][0];
    int min = matrix[0][0];
    int maxrow = 0, maxcol = 0, minrow = 0, mincol = 0;
    
    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++){
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxrow = i;
                maxcol = j;
            }
            if (matrix[i][j] < min){
                min = matrix[i][j];
                minrow = i;
                mincol = j;
            }
        }
    }

    printf("Max = %d at position [%d][%d] \n", max, maxrow, maxcol);
    printf("Min = %d at position [%d][%d] \n", min, minrow, mincol);

*/













/*

Ask the user for a row index, print the sum of that row.
Ask the user for a column index, print the sum of that column.

int row_index;
    printf("Enter a row number to get its sum: ");
    scanf("%d", &row_index);

    int row_sum = 0;
    for(int j = 0; j<col; j++) {
        row_sum += matrix[row_index - 1][j];
    }

    printf("Row Sum : %d \n", row_sum);

    int col_index;
    printf("Enter a col number to get its sum: ");
    scanf("%d", &col_index);

    int col_sum = 0;
    for(int i = 0; i<row; i++) {
        col_sum += matrix[i][col_index - 1];
    }

    printf("Col Sum : %d \n", col_sum);
*/