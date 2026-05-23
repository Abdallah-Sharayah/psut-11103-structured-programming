// Recursive 2D fill, print, and find-max — no for-loops anywhere.
// Pattern: pass (i, j) as parameters. After visiting (i, j), advance to (i, j+1);
// at end of row, advance to (i+1, 0); base case is (ROWS-1, COLS-1).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 5

void fillArray(int arr[ROWS][COLS], int i, int j) {
    arr[i][j] = 1 + rand() % 99;
    if (i == ROWS - 1 && j == COLS - 1)
        return;
    if (j < COLS - 1)
        fillArray(arr, i, j + 1);
    else
        fillArray(arr, i + 1, 0);
}

void printArray(int arr[ROWS][COLS], int i, int j) {
    if (i == ROWS - 1 && j == COLS - 1) {
        printf("%02d\n", arr[i][j]);
        return;
    }
    printf("%02d ", arr[i][j]);
    if (j < COLS - 1)
        printArray(arr, i, j + 1);
    else {
        printf("\n");
        printArray(arr, i + 1, 0);
    }
}

int max2D(int arr[ROWS][COLS], int i, int j) {
    if (i == ROWS - 1 && j == COLS - 1)
        return arr[i][j];

    int restMax;
    if (j < COLS - 1)
        restMax = max2D(arr, i, j + 1);
    else
        restMax = max2D(arr, i + 1, 0);

    return arr[i][j] > restMax ? arr[i][j] : restMax;
}

int main() {
    srand(time(0));
    int numbers[ROWS][COLS];

    fillArray(numbers, 0, 0);
    printArray(numbers, 0, 0);
    printf("\nMax: %d\n", max2D(numbers, 0, 0));
    return 0;
}
