// EXAM: Form A Q5 (2024). Count negatives in array recursively.
// Accumulator pattern: base case returns 0 (nothing to count when empty),
// recursive case adds 1 or 0 based on the last element, then recurses on smaller.
// KEY: base case = "empty array has 0 negatives", not "check last element".
#include <stdio.h>

int countNegatives(int arr[], int size) {
    if (size == 0)
        return 0;
    else {
        if (arr[size - 1] < 0)
            return 1 + countNegatives(arr, size - 1);
        else
            return countNegatives(arr, size - 1);
    }
}

int main() {
    int arr1[7] = {-1, 1, -6, 2, -7, 3, 4};
    int arr2[7] = {6, 1, 2, 2, -5, 3, 4};
    int arr3[7] = {6, 1, 2, 2, 8, 3, 4};
    printf("%d\n", countNegatives(arr1, 7));  // 3
    printf("%d\n", countNegatives(arr2, 7));  // 1
    printf("%d\n", countNegatives(arr3, 7));  // 0
    return 0;
}
