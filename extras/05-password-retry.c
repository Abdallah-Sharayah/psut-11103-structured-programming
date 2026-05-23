// Password retry: gives the user 5 attempts, breaks out on the first correct entry.
#include <stdio.h>

int main() {
    int password = 123456;
    int input;

    for (int attempts = 5; attempts > 0; attempts--) {
        printf("Enter your password: ");
        scanf("%d", &input);

        if (input == password) {
            printf("Welcome user!\n");
            return 0;
        }
        printf("Wrong password. %d attempt(s) left.\n", attempts - 1);
    }

    printf("Account locked.\n");
    return 0;
}
