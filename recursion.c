#include <stdio.h>

int countUppercase(char arr[], int index) {

    if(arr[index] == '\0')
        return 0;
    else {
        if(arr[index] >= 'A' && arr[index] <= 'Z')
            return 1 + countUppercase(arr, index+1);
        else
            return countUppercase(arr, index+1);
    }
}

void toggleCase(char arr[], int index) {
    if(arr[index] == '\0')
        return;
    else {
        if(arr[index] >= 'A' && arr[index] <= 'Z') {
            arr[index] += 32;
            toggleCase(arr, index+1);
        }
        else if(arr[index] >= 'a' && arr[index] <= 'z') {
            arr[index] -= 32;
            toggleCase(arr, index+1);
        }
        else
            toggleCase(arr, index+1);
            
    }
}


int main() {

    char test[] = "Hello World";
    printf("%d\n", countUppercase(test, 0));

    toggleCase(test, 0);
    printf("%s", test);
    return 0;
}   

void bubbleSort(int arr[], int size) {
    // base case;
    if (size == 1)
        return;
    for (int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    // recursive call 
    bubbleSort(arr, size - 1);
}