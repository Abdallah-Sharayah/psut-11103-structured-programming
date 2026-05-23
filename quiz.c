#include <stdio.h>
#define SIZE 7 
#define POS 4
#define NEG 3

void positivesAndNegatives(int numbers[]) {
    int positives[POS];
    int negatives[NEG];
    int pos_index = 0;
    int neg_index = 0;

    for(int i = 0; i < SIZE; i++) {
        if (numbers[i] > 0) {
            positives[pos_index] = numbers[i];
            pos_index++;
        }
        else if (numbers[i] < 0) {
            negatives[neg_index] = numbers[i];
            neg_index++;
        }
    }
    printf("Positive numbers : ");
    for(int i = 0; i < POS; i++) {
        printf("%d ", positives[i]);
    }
    printf("\nNegative numbers : ");
    for(int i = 0; i < NEG; i++) {
        printf("%d ", negatives[i]);
    }
}
int main() {

    int numbers[] = {1, 3, -5, -4, 5, 6, -3};
    positivesAndNegatives(numbers);
    
}