#include <stdio.h>

int main() {

    int password = 123456;
    int user_input;

    for (int i = 5; i > 0; i--) {
        printf("Enter your password : \n");
        scanf("%d", &user_input);

        if (password != user_input)
            printf("You entered a wrong password!\n");
            
    }

    printf("Welcome User!");
}