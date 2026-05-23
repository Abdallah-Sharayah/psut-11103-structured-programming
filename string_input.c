#include <stdio.h>



int main() {

    char string1[20];

    printf("Enter your full name: \n");
    scanf("%19[^\n]", &string1);
    //fgets(string1, sizeof(string1), stdin);
    printf("Your name is : %s", string1);

}

/* 
We can use This instead :

char str[50];
printf("Enter text: ");
fgets(str, sizeof(str), stdin);

*/