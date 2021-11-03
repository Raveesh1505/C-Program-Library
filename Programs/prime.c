#include <stdio.h>

int main(){
    int num, raise = 1, i;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    // Checking prime numbers

    for (i=2; i < num; i++){
        if (num % i == 0){
            raise += 1;
        }
    }

    if (raise == 1){
        printf("The number is a prime number.");
    }
    else{
        printf("The number is not a prime number.");
    }
    return 0;
}