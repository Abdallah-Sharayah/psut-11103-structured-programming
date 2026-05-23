#include <stdio.h> 
#define SIZE 10

char encrypt(char secret[], int key) {
    for (int i = 0; i < SIZE; i++) {
        if(secret[i] >= 'a' && secret[i] <= 'z')
            secret[i] = secret[i] - 32;

        if (secret[i] + key > 90)
            printf("%c", (secret[i] +key) -90 +65-1);
        else
            printf("%c", secret[i]+key);
    }
}

char decrypt(char secret[], int key) {
    for (int i = 0; i < SIZE; i++) {
        if(secret[i] >= 'a' && secret[i] <= 'z')
            secret[i] = secret[i] - 32;

        if (secret[i] - key < 65)
            printf("%c", (90 - key + (secret[i] - 65) + 1));
        else
            printf("%c", ("%c", secret[i] - key));
    }
}



int main() {

    char message[SIZE];
    int key;

    printf("Enter the Secret message you want to encrypt : \n");
    scanf("%s", message);

    printf("\nEnter the secret KEY: \n");
    scanf("%d", &key);


    encrypt(message, key);
    printf("\n");
    
    char encryptedMessage[] = "FGIFQQFMXM";

    decrypt(encryptedMessage, key);

    


}