// Caesar cipher. Upper-cases input first, then shifts each letter by `key`
// positions with wrap-around in the 'A'..'Z' range.
//   encrypt: c' = ((c - 'A') + key) mod 26 + 'A'
//   decrypt: c' = ((c - 'A') - key + 26) mod 26 + 'A'
#include <stdio.h>
#include <string.h>

#define SIZE 10

void encrypt(char secret[], int key) {
    for (int i = 0; i < SIZE && secret[i] != '\0'; i++) {
        if (secret[i] >= 'a' && secret[i] <= 'z')
            secret[i] -= 32;
        if (secret[i] >= 'A' && secret[i] <= 'Z')
            secret[i] = ((secret[i] - 'A') + key) % 26 + 'A';
    }
}

void decrypt(char secret[], int key) {
    for (int i = 0; i < SIZE && secret[i] != '\0'; i++) {
        if (secret[i] >= 'a' && secret[i] <= 'z')
            secret[i] -= 32;
        if (secret[i] >= 'A' && secret[i] <= 'Z')
            secret[i] = ((secret[i] - 'A') - key + 26) % 26 + 'A';
    }
}

int main() {
    char message[SIZE + 1];
    int key;

    printf("Enter the secret message to encrypt: ");
    scanf("%10s", message);
    printf("Enter the secret KEY: ");
    scanf("%d", &key);

    encrypt(message, key);
    printf("Encrypted: %s\n", message);

    decrypt(message, key);
    printf("Decrypted: %s\n", message);
    return 0;
}
