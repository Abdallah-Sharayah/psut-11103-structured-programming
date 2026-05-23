// Reading a string with spaces — scanf("%s") stops at whitespace, so two options:
//   1. scanf with negated character class: "%19[^\n]" reads up to (but not past) \n,
//      capped at 19 chars to leave room for the '\0' terminator.
//   2. fgets(buf, sizeof(buf), stdin) — simpler and idiomatic; keeps the trailing \n
//      which you usually strip.
#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your full name: ");
    scanf("%19[^\n]", name);
    printf("Your name is: %s\n", name);

    // Alternative:
    // char buf[50];
    // fgets(buf, sizeof(buf), stdin);
    return 0;
}
