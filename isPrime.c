#include <stdio.h>
/*Write a C program that read in an integer. The program checks whether the given number is a 
Prime or not. Take into account that the prime number is a natural number greater than 1 that 
has no positive divisors other than one and itself.*/

void isPrime(int number) {
    int is_prime = 0;
    if (number <= 1) 
        printf("Enter a number > 1");
    else {
        for(int i = number - 1; i > 1; i--) {
        if(number % i == 0){
            is_prime++;
        }         
        }
    if(is_prime == 0)
        printf("%d is a Prime number.", number);
    else
        printf("%d is not a prime : ", number);
        
        
    }
}
int main() {
    int user_number;
    printf("Enter a number to see if it is prime or not make sure its > 1 : \n");
    scanf("%d", &user_number);
    isPrime(user_number);
    return 0;
}