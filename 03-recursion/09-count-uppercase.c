// Recursive uppercase count.
// ASCII range check: 'A'..'Z' is contiguous (65..90).
#include <stdio.h>

int countUppercase(char arr[], int index) {
    if (arr[index] == '\0')
        return 0;
    if (arr[index] >= 'A' && arr[index] <= 'Z')
        return 1 + countUppercase(arr, index + 1);
    else
        return countUppercase(arr, index + 1);
}

int main() {
    char s[] = "Hello World";
    printf("Uppercase in \"%s\" = %d\n", s, countUppercase(s, 0));  // 2
    return 0;
}
