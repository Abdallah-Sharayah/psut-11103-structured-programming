// Print n..1 in reverse order.
// KEY: print FIRST, then recurse. Prints happen on the way DOWN.
// Same function as printForward, only the order of print and recurse is swapped.
#include <stdio.h>

void printReverse(int n) {
    if (n == 1) {
        printf("%d\n", n);
    } else {
        printf("%d\n", n);          // print current first
        printReverse(n - 1);        // then recurse on smaller
    }
}

int main() {
    printReverse(5);  // 5, 4, 3, 2, 1
    return 0;
}
