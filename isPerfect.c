#include <stdio.h>
/*Write a C program that reads in an integer. The program checks whether the given number is a 
Perfect number or not. Take into account that the perfect number is an number that is equal to 
the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the 
number itself.*/

void isPerfect(int number) {

    int divisors_sum = 0;

    for(int i = number - 1; i>0; i--) {
        if(number % i == 0) {
            divisors_sum += i;
        }
    }

    if(number == divisors_sum)
        printf("%d is a perfect number!", number);
    else
        printf("%d is not perfect number!", number);

}
int main() {
    int user_number;
    printf("Enter a number to see if it is perfect or not : \n");
    scanf("%d", &user_number);
    isPerfect(user_number);
    return 0;
}