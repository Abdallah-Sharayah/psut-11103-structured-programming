// const with pointers — three flavors. Read right-to-left.
//
//   int * const p       "p is a const pointer to int"   pointer locked, value free
//   int const * p       "p is a pointer to const int"   value locked, pointer free
//   int const * const p "both locked"
//
// const int * p is the same as int const * p.
#include <stdio.h>

int main() {
    int x = 10, y = 20;

    // Flavor 1: pointer locked
    int * const p1 = &x;
    *p1 = 99;               // OK: modifies x
    // p1 = &y;             // ERROR if uncommented: p1 is a const variable

    // Flavor 2: value locked
    int const * p2 = &x;
    // *p2 = 50;            // ERROR if uncommented: *p2 is a read-only location
    p2 = &y;                // OK: p2 itself is not const

    // Flavor 3: both locked
    int const * const p3 = &x;
    // *p3 = 7;             // ERROR
    // p3 = &y;             // ERROR

    printf("x = %d\n", x);     // 99
    printf("*p2 = %d\n", *p2); // 20
    printf("*p3 = %d\n", *p3); // 99 (still pointing at x)
    return 0;
}
