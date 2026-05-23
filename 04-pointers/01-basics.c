// Pointer fundamentals.
// & = "address of", * = "value at".
// They are inverses: *(&x) is the same as x.
#include <stdio.h>

int main() {
    int x = 7;
    int *p = &x;            // p stores x's address

    printf("x  = %d\n", x);
    printf("*p = %d\n", *p);    // same as x
    printf("&x = %p\n", (void*)&x);
    printf("p  = %p\n", (void*)p);   // same address as &x

    *p = 20;                // modify x THROUGH the pointer
    printf("After *p = 20, x = %d\n", x);  // 20
    return 0;
}
