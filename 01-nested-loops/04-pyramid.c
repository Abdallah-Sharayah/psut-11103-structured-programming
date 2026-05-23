// Centered pyramid: row i has (height - 1 - i) spaces, then (2i + 1) stars.
#include <stdio.h>

int main() {
    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {
        for (int j = i + 1; j < height; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
