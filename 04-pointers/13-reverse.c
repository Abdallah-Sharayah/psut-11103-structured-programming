// EXAM: Form A Q3A (2024), 5 pts. Find first occurrence of chr in ptr,
// then reverse everything AFTER chr. If chr not found, leave ptr unchanged.
//
// Examples:
//   "Excellent", 'c' -> "Exctnelle"
//   "World", 'r'     -> "Wordl"
//   "University", 'b'-> "University"
//
// Algorithm: walk to find chr; if not found, return. Otherwise set up start (right after chr)
// and end (last char before '\0'), then swap inward until they meet.
#include <stdio.h>

void Reverse(char *ptr, char chr) {
    char *p = ptr;
    while (*p != '\0' && *p != chr)
        p++;
    if (*p == '\0')
        return;                     // chr not found

    char *start = ++p;              // first char after chr
    char *end = start;
    while (*end != '\0') end++;
    end--;                          // last actual char (back off the '\0')

    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char s1[] = "Excellent";
    Reverse(s1, 'c');
    printf("%s\n", s1);   // Exctnelle

    char s2[] = "World";
    Reverse(s2, 'r');
    printf("%s\n", s2);   // Wordl

    char s3[] = "University";
    Reverse(s3, 'b');
    printf("%s\n", s3);   // University
    return 0;
}
