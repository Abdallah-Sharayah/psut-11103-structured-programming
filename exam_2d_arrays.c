#include <stdio.h>
#define SIZE 6


int rowsHaveUniqueDigits(int data[][SIZE]) {

    for(int i = 0; i < SIZE; i++) {

        for(int j = 0; j <= 5; j++) {
            int count = 0;
            for(int k = 0; k < SIZE; k++){
                if(data[i][k] == j)
                    count++;
            }
            if(count != 1)
                return 0;
        }
    }
    return 1;
}


int main() {
    // Good case: each row is a permutation of 0..5
    int good[6][6] = {
        {0, 5, 4, 3, 2, 1},
        {1, 0, 5, 4, 3, 2},
        {2, 1, 0, 5, 4, 3},
        {3, 2, 1, 0, 5, 4},
        {4, 3, 2, 1, 0, 5},
        {5, 4, 3, 2, 1, 0}
    };
    printf("Good: %d\n", rowsHaveUniqueDigits(good));  // expect 1

    // Bad case: row 0 has two 5s
    int bad[6][6] = {
        {0, 5, 4, 3, 2, 5},
        {1, 0, 5, 4, 3, 2},
        {2, 1, 0, 5, 4, 3},
        {3, 2, 1, 0, 5, 4},
        {4, 3, 2, 1, 0, 5},
        {5, 4, 3, 2, 1, 0}
    };
    printf("Bad: %d\n", rowsHaveUniqueDigits(bad));    // expect 0

    return 0;
}