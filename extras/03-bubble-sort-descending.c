// Iterative bubble sort — descending order.
// Outer loop: number of passes. Inner loop: adjacent compare-and-swap.
// Swap when arr[j] < arr[j+1] (puts larger value first => descending).
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[6] = {4, 1, 7, 3, 9, 5};
    bubbleSort(nums, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", nums[i]);
    printf("\n");  // 9 7 5 4 3 1
    return 0;
}
