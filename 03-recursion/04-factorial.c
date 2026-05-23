// n! = n * (n-1) * ... * 1
// Same skeleton as sumTo, just multiplication instead of addition.
#include <stdio.h>

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    printf("5! = %d\n", factorial(5));   // 120
    printf("7! = %d\n", factorial(7));   // 5040
    return 0;
}
