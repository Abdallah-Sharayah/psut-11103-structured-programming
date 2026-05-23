// Print 1..n in forward order.
// KEY: recurse FIRST, then print. Prints happen on the way back UP the call stack.
#include <stdio.h>

void printForward(int n) {
    if (n == 1) {
        printf("%d\n", n);
    } else {
        printForward(n - 1);       // smaller subproblem first
        printf("%d\n", n);          // then print current
    }
}

int main() {
    printForward(5);  // 1, 2, 3, 4, 5
    return 0;
}
