// Count digits in a string via pointer walk.
// Const-correct: the function promises not to modify the string,
// so it can accept either a writable array OR a read-only literal.
#include <stdio.h>

int countDigits(const char *s) {
    int count = 0;
    while (*s != '\0') {
        if (*s >= '0' && *s <= '9')
            count++;
        s++;
    }
    return count;
}

int main() {
    const char *s = "Ahmad123Hello456";   // literal is safe because function is const-correct
    printf("Digits in \"%s\" = %d\n", s, countDigits(s));  // 6
    return 0;
}
