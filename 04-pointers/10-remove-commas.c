// EXAM: past paper (8 pts). Copy oldval to newval, skip commas.
// Constraint per the exam: pointer-only, no arrays inside the function.
//
// Two-pointer template. Walks ARE generic — change the filter, get a different question:
//   if (*oldval != ',')  -> RemoveCommas
//   if (*oldval != ' ')  -> RemoveSpaces
//   if (*oldval < '0' || *oldval > '9')  -> RemoveDigits
//
// Don't forget the '\0' at the end of newval!
#include <stdio.h>

void RemoveCommas(char *oldval, char *newval) {
    while (*oldval != '\0') {
        if (*oldval != ',')
            *newval++ = *oldval;   // assign-and-advance
        oldval++;
    }
    *newval = '\0';                // terminate the new string
}

int main() {
    char out1[20];
    RemoveCommas("v1,v2,v3", out1);
    printf("%s\n", out1);     // v1v2v3

    char out2[30];
    RemoveCommas("a,b,c,d,e", out2);
    printf("%s\n", out2);     // abcde

    char out3[30];
    RemoveCommas("no commas here", out3);
    printf("%s\n", out3);     // no commas here
    return 0;
}
