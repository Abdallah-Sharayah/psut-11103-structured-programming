// Return 1+2+...+n recursively.
// Reducer pattern: get answer for smaller problem, combine with current.
#include <stdio.h>

int sumTo(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumTo(n - 1);
}

int main() {
    printf("Sum 1..4 = %d\n", sumTo(4));   // 10
    printf("Sum 1..10 = %d\n", sumTo(10)); // 55
    return 0;
}
