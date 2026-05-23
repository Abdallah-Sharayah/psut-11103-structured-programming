// Fill a 4x5 matrix with random 1..50, print, compute sum and average.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int matrix[4][5];

    // Fill matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = 1 + rand() % 50;
        }
    }

    // Print matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%02d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Sum and average
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum     : %d\n", sum);
    printf("Average : %.2f\n", (float) sum / (4 * 5));
    return 0;
}
