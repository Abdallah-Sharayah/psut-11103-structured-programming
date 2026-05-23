#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/*
Problem 1
int main() {

    int height;

    printf("Enter height: ");
    scanf("%d", &height);

    for(int i = 0; i < height; i++) {
        for(int j = i + 1; j < height; j++){
            printf(" ");
        }
        for(int k = 0; k < (2*i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
*/

/*
int main() {

    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <=size; j++) {
            if(i == 1 || j == 1 || i == size || j == size) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
*/

//problem 3

int main() {

    srand(time(0));
    int matrix[4][5];

    // filling the matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            int r1 = 1 + rand() % (50 - 1 + 1);
            matrix[i][j] = r1; 
        }
    }

    // printing the matrix

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%02d  ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Sum of all elements 
    int sum = 0;
    int counter = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            sum += matrix[i][j];
            counter++;
        }
    }

    printf("Sum : %d \n", sum);

    printf("Average : %.2f", (float) sum / counter);
    return 0;
}