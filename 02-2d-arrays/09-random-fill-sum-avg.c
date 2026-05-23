// Fill a 4x5 matrix with random ints 1..50, print it, then compute sum and average.
// Average uses (float) cast on sum so integer division does not truncate.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COL 5

int main() {
    srand(time(0));
    int matrix[ROW][COL];

    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            matrix[i][j] = 1 + rand() % 50;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            printf("%02d  ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");

    int sum = 0;
    int count = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sum += matrix[i][j];
            count++;
        }
    }

    printf("Sum    : %d\n", sum);
    printf("Average: %.2f\n", (float) sum / count);
    return 0;
}
