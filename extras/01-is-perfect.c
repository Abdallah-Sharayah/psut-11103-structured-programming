// Perfect number: equal to the sum of its proper positive divisors
// (positive divisors excluding the number itself).
// Example: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14.
#include <stdio.h>

void isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            sum += i;
    }
    if (number == sum)
        printf("%d is a perfect number.\n", number);
    else
        printf("%d is not a perfect number.\n", number);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPerfect(n);
    return 0;
}
