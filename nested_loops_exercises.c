#include <stdio.h>

/*
Problem 1 

int main() {

    int n;
    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
Problem 2
int main() {
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%4d", (i*j));
        }
        printf("\n");
    }
}
*/

int main() {
    for(int i = 1; i<=8; i++){
        for(int j = 1; j <= 8; j++){
            if((i + j) % 2 == 0)
                printf("W ");
            else
                printf("B ");
        }
        printf("\n");
    }
}

