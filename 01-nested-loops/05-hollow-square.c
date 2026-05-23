// Hollow square: stars on border, spaces inside.
#include <stdio.h>

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || j == 1 || i == size || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
