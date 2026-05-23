// THE canonical pointer function.
// Without pointers, you cannot write a swap function in C.
// Pass addresses, modify through them, caller sees the swap.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After:  x = %d, y = %d\n", x, y);  // x=20, y=10
    return 0;
}
