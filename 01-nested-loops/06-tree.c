// Christmas-tree pattern. Each row has leading spaces, then i stars, '|', i stars.
// Total width grows by 2 per row; '|' marks the trunk axis.
#include <stdio.h>

int main() {
    int height = 9;

    printf("          ^\n");
    for (int i = 1; i <= height; i++) {
        for (int j = height + 1 - i; j > 0; j--)
            printf(" ");
        for (int k = 0; k < i; k++)
            printf("*");
        printf("|");
        for (int k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
