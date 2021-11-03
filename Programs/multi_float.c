#include <stdio.h>

int main(){
    float num1, num2, prod;

    // Taking user input

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculating and printing the product

    prod = num1 * num2;

    printf("%f x %f = %f", num1, num2, prod);
    return 0;
}