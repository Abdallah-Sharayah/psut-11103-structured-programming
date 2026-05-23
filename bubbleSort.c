#include <stdio.h>

void bubbleSort(int unsortedarr[], int size) {
    for(int i=0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(unsortedarr[j] < unsortedarr[j + 1]){
                int temp = unsortedarr[j];
                unsortedarr[j] = unsortedarr[j+1];
                unsortedarr[j+1] = temp; 
            }
        }
    }
}


int main() {

    int unsorted_nums[6] = {4, 1, 7, 3, 9, 5};
    
    bubbleSort(unsorted_nums, 6);

    for(int i = 0; i< 6; i++) {
        printf("%d ", unsorted_nums[i]);
    }

}