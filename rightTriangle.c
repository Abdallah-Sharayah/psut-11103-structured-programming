#include <stdio.h>

//Draw a right triangle
int main() {
    int height = 0;
    printf("Enter Triangle Height: \n");
    scanf("%d", &height);
    for(int i = 1; i <= height; i++) {
        for(int j = 0 ; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

    