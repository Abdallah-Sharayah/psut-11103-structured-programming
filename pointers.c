#include <stdio.h>

void Reverse(char *ptr, char chr) {
    char *p = ptr; 

    while(*p != '\0' && *p != chr) {
        p++;
    }

    if(*p == '\0') return;

    char *start = ++p;
    char *end = start;
    while(*end != '\0') end++;
    end--;

    while(start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
   char s1[] = "Excellent";
    Reverse(s1, 'c');
    printf("%s\n", s1);  // expect: Exctnelle
    
    char s2[] = "World";
    Reverse(s2, 'r');
    printf("%s\n", s2);  // expect: Wordl
    
    char s3[] = "University";
    Reverse(s3, 'b');
    printf("%s\n", s3);  // expect: University
    
    return 0;
}