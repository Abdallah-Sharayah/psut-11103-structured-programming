// Convert a string to uppercase IN PLACE through a pointer.
// IMPORTANT: works only on a writable buffer (char arr[]), NOT on a string literal
// (char *p = "..."), which is read-only and would crash on assignment.
#include <stdio.h>

void toUpperCase(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z')
            *s -= 32;        // ASCII: lower - 32 = upper
        s++;
    }
}

int main() {
    char name[] = "hello world 123";   // writable array — OK to modify
    printf("Before: %s\n", name);
    toUpperCase(name);
    printf("After:  %s\n", name);  // HELLO WORLD 123
    return 0;
}
