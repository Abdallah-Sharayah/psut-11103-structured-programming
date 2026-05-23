// Custom strlen without string.h.
// Pointer walk, count until '\0'.
#include <stdio.h>

int myStrlen(const char *s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

int main() {
    printf("%d\n", myStrlen("Hello"));   // 5
    printf("%d\n", myStrlen(""));        // 0
    printf("%d\n", myStrlen("a"));       // 1
    return 0;
}
