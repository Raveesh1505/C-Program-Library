#include <stdio.h>

int main(){
    int num1, num2, sum;

    // Taking user input

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Computing the sum

    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}