// Pointer arithmetic gotchas — exam trap territory.
//
//   (*p)++   postfix on the VALUE: returns OLD value, then increments value
//   ++(*p)   prefix on the VALUE:  increments value, then returns NEW value
//   *p++     postfix on the POINTER: returns *p, then advances p (precedence: ++ binds tighter than *)
//   (*p)++ and ++(*p) both modify what p points to.
//   *p++ leaves the VALUE unchanged and moves p.
#include <stdio.h>

int main() {
    int x = 8;
    int *p = &x;
    printf("Test 1: (*p)++\n");
    printf("  Before: x=%d, *p=%d\n", x, *p);
    printf("  Expr returns: %d\n", (*p)++);   // 8 (OLD)
    printf("  After:  x=%d, *p=%d\n\n", x, *p);   // both 9

    x = 8;
    p = &x;
    printf("Test 2: ++(*p)\n");
    printf("  Before: x=%d, *p=%d\n", x, *p);
    printf("  Expr returns: %d\n", ++(*p));   // 9 (NEW)
    printf("  After:  x=%d, *p=%d\n", x, *p);     // both 9
    return 0;
}
