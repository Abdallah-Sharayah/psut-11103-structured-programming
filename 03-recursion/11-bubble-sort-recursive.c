// EXAM: Spring 2024 Q4-1. Recursive bubble sort.
// One parameter (size): the "active region" shrinks each call.
// After one pass, the largest element is at the end; recurse on the smaller prefix.
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    if (size == 1)
        return;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, size - 1);
}

int main() {
    int arr[7] = {5, 3, 7, 2, 4, 1, 6};
    bubbleSort(arr, 7);
    for (int i = 0; i < 7; i++) printf("%d ", arr[i]);
    printf("\n");  // 1 2 3 4 5 6 7
    return 0;
}
