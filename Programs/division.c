#include <stdio.h>

int main(){
    int num1, num2, q, r;

    // Taking user input

    printf("Enter the dividend: ");
    scanf("%d", &num1);
    printf("Enter the divisor: ");
    scanf("%d", &num2);

    // Calculating and printing quotient and remainder

    q = num1 / num2;
    r = num1 % num2;
    
    printf("The quotient is: %d\nThe remainder is: %d", 1, r);
    return 0;
}