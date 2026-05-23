// Recursive vowel count.
// Accumulator pattern on a string. Base case: null terminator returns 0.
// Tip: cache arr[index] into a char to avoid 10 array accesses.
#include <stdio.h>

int countVowels(char arr[], int index) {
    if (arr[index] == '\0')
        return 0;
    char c = arr[index];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1 + countVowels(arr, index + 1);
    else
        return countVowels(arr, index + 1);
}

int main() {
    char s[] = "Hello World";
    printf("Vowels in \"%s\" = %d\n", s, countVowels(s, 0));  // 3
    return 0;
}
