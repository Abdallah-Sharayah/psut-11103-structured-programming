// THE central pointer concept.
// By value: function gets a COPY of the value. Modifications stay local.
// By reference: function gets the ADDRESS. Modifications affect the caller's variable.
#include <stdio.h>

void incrementByValue(int a) {
    a++;
    printf("Inside byValue,     a  = %d\n", a);
}

void incrementByReference(int *a) {
    (*a)++;                 // parentheses matter: ++(*a) increments the VALUE
    printf("Inside byReference, *a = %d\n", *a);
}

int main() {
    int x = 5;
    printf("Before byValue:     x = %d\n", x);
    incrementByValue(x);
    printf("After  byValue:     x = %d\n\n", x);    // still 5

    int y = 5;
    printf("Before byReference: y = %d\n", y);
    incrementByReference(&y);
    printf("After  byReference: y = %d\n", y);      // now 6
    return 0;
}
