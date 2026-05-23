// Recursive strlen.
// Base case: hit null terminator, return 0.
// Recursive case: 1 + length of the rest.
#include <stdio.h>

int stringLength(char arr[], int index) {
    if (arr[index] == '\0')
        return 0;
    else
        return 1 + stringLength(arr, index + 1);
}

int main() {
    char s[] = "Hello";
    printf("Length of \"%s\" = %d\n", s, stringLength(s, 0));  // 5
    return 0;
}
