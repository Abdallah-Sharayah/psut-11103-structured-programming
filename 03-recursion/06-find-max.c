// Find max of array recursively using forward index.
// Reducer pattern: delegate the rest, compare own element to that result.
#include <stdio.h>

int findMax(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];
    else {
        int maxRest = findMax(arr, index + 1, size);
        if (arr[index] > maxRest)
            return arr[index];
        else
            return maxRest;
    }
}

int main() {
    int arr[6] = {3, 7, 2, 9, 4, 1};
    printf("Max = %d\n", findMax(arr, 0, 6));  // 9
    return 0;
}
