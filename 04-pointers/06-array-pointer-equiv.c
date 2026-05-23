// Array name = pointer to first element.
// arr[i] and *(arr+i) and p[i] all give the same result.
//
// CAREFUL: inside a function, sizeof(arr) is the SIZE OF A POINTER, not the array's size.
// Arrays decay to pointers when passed as parameters. Always pass size separately.
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;       // no & needed: array name IS the address

    for (int i = 0; i < 5; i++) {
        printf("numbers[%d]=%d  *(p+%d)=%d  p[%d]=%d\n",
               i, numbers[i], i, *(p + i), i, p[i]);
    }

    printf("\n&numbers[0]: %p\n", (void*)&numbers[0]);
    printf("p:           %p\n", (void*)p);
    printf("numbers:     %p\n", (void*)numbers);  // all identical

    printf("\nsizeof(numbers) in main = %lu (array's full size)\n",
           (unsigned long) sizeof(numbers));
    return 0;
}
