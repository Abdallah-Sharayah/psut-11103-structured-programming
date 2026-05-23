// Toggle case IN PLACE recursively.
// ASCII trick: lowercase - 32 = uppercase. Distance is 32 in both directions.
// Note: the recursive call is hoisted out of the if/else (common to all branches).
#include <stdio.h>

void toggleCase(char arr[], int index) {
    if (arr[index] == '\0')
        return;
    if (arr[index] >= 'A' && arr[index] <= 'Z')
        arr[index] += 32;
    else if (arr[index] >= 'a' && arr[index] <= 'z')
        arr[index] -= 32;
    toggleCase(arr, index + 1);
}

int main() {
    char s[] = "Hello World 123";
    printf("Before: %s\n", s);
    toggleCase(s, 0);
    printf("After:  %s\n", s);  // hELLO wORLD 123
    return 0;
}
