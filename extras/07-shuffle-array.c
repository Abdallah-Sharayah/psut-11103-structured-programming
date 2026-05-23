// Crude in-place shuffle: pick two random indices, swap; repeat N times.
// Note: not a true uniform shuffle (Fisher–Yates is the correct one), but useful
// as a starting exercise for rand() and in-place swap.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    srand(time(NULL));

    printf("Before: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        int r1 = rand() % SIZE;
        int r2 = rand() % SIZE;
        int temp = numbers[r1];
        numbers[r1] = numbers[r2];
        numbers[r2] = temp;
    }

    printf("After : ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
