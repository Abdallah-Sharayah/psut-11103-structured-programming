// Same skeleton as RemoveCommas. Only the filter character changes.
// This proves the pattern: any "skip char X" question is the same code.
#include <stdio.h>

void RemoveSpaces(char *oldval, char *newval) {
    while (*oldval != '\0') {
        if (*oldval != ' ')
            *newval++ = *oldval;
        oldval++;
    }
    *newval = '\0';
}

int main() {
    char out[30];
    RemoveSpaces("hello world from C", out);
    printf("%s\n", out);   // helloworldfromC
    return 0;
}
