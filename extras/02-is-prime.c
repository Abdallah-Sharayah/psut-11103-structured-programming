// Prime: natural number > 1 whose only positive divisors are 1 and itself.
// Scan i from 2..n-1; if any divides n, it is composite.
#include <stdio.h>

void isPrime(int number) {
    if (number <= 1) {
        printf("Enter a number > 1.\n");
        return;
    }
    int divisors = 0;
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            divisors++;
    }
    if (divisors == 0)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
}

int main() {
    int n;
    printf("Enter a number (> 1): ");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}
