// Split an int array into two buckets (positives, negatives), then print each.
// Two running indices track the next free slot in each bucket.
#include <stdio.h>

#define SIZE 7
#define POS 4
#define NEG 3

void positivesAndNegatives(int numbers[]) {
    int positives[POS];
    int negatives[NEG];
    int pi = 0, ni = 0;

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > 0)
            positives[pi++] = numbers[i];
        else if (numbers[i] < 0)
            negatives[ni++] = numbers[i];
    }

    printf("Positives: ");
    for (int i = 0; i < pi; i++)
        printf("%d ", positives[i]);
    printf("\nNegatives: ");
    for (int i = 0; i < ni; i++)
        printf("%d ", negatives[i]);
    printf("\n");
}

int main() {
    int numbers[SIZE] = {1, 3, -5, -4, 5, 6, -3};
    positivesAndNegatives(numbers);
    return 0;
}
