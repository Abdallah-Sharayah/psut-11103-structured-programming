// 8x8 chessboard: W/B alternating based on (i+j) parity.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if ((i + j) % 2 == 0)
                printf("W ");
            else
                printf("B ");
        }
        printf("\n");
    }
    return 0;
}
