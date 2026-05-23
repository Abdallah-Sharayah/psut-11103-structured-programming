#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 6
#define cols 5

void fillArray(int arr[rows][cols], int i, int j) {
    if (i == rows - 1 && j == cols - 1){
        int r1 = 1 + rand() % (100);
        arr[i][j] = r1;
    }
    else{
        int r1 = 1 + rand() % 99;
        arr[i][j] = r1;
        if (j < (cols - 1))
            fillArray(arr, i, j+1);
        else{
            if (i < rows - 1)
                fillArray(arr, i+1, 0);
        }
            
    }
}

void printArray(int arr[rows][cols], int i, int j) {
    if(i == rows - 1 && j == cols - 1)
        printf("%02d", arr[i][j]);
    else {
        printf("%02d ", arr[i][j]);
        if(j < (cols - 1)){
            printArray(arr, i, j+1);
        }
        else{
            printf("\n");
            if (i < rows - 1)
                printArray(arr, i+1, 0);
        }
            

            
    }
}

int max2DArray(int arr[rows][cols], int i, int j) {
    if (i == rows - 1 && j == cols - 1)
        return arr[i][j];
    else{

        if(j < cols - 1){
            int maxNum = max2DArray(arr, i, j+1);
            if(arr[i][j] > maxNum)
                return arr[i][j];
            else
                return maxNum;
        }
        else{
            int maxNum = max2DArray(arr, i+1, 0);
            if (arr[i][j] > maxNum)
                return arr[i][j];
            else
                return maxNum;
        }



    }
}

int main() {
    srand(time(0));
    int numbers[rows][cols];
    fillArray(numbers, 0, 0);    
    printArray(numbers, 0, 0);

    printf("\n\n");

    printf("Max: %d", max2DArray(numbers, 0, 0));
}