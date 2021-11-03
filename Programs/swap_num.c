#include <stdio.h>

int main(){
    int num1, num2;

    // Taking user input

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Printing the numbers before swapping

    printf("\nFirst number before swap: %d\nSecond number before swap: %d", num1, num2);

    // Swapping and printing the numbers

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nFirst number after swapping: %d\nSecond number after swapping: %d", num1, num2);
    return 0;
}