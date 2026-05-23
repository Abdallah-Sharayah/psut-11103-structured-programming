#include <stdio.h> 

int main() {
    printf("          ^\n");
    for(int i = 1; i < 10; i++) {

        for(int j = 10 - i; j > 0; j--) {
            printf(" ");
        }

        for(int k = 0; k < i; k++) {
            printf("*");
        }
        printf("|");
        for (int h = 0; h < i; h++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}