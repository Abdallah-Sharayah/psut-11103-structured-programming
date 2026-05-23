// Two ways to walk a string. Both produce the same output.
//
// Method 1: pointer stays put, use *(p+i) with index.
// Method 2: advance the pointer with ++. Idiomatic for pointer-heavy code.
//
// In Method 2, *q++ is the assign-and-advance idiom:
//   it returns *q for use, AND advances q (since ++ has higher precedence than *).
#include <stdio.h>

int main() {
    char name[] = "Ahmad";

    // Method 1
    char *p = name;
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c ", *(p + i));
    }
    printf("\n");

    // Method 2
    char *q = name;
    while (*q != '\0') {
        printf("%c ", *q++);    // dereference then advance
    }
    printf("\n");
    return 0;
}
