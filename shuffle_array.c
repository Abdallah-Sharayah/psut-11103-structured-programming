#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main() {
    
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    srand(time(NULL));
    printf("Numbers before : ");
    for(int i = 0; i< 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for(int i =0; i<10; i++) {
        int temp;
        int r1 = rand() % 10;
        int r2 = rand() % 10;
        temp = numbers[r1];
        numbers[r1] = numbers[r2];
        numbers[r2] = temp;
    }

    printf("Numbers after : ");
    for(int i = 0; i< 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}