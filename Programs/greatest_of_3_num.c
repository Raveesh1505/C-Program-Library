#include <stdio.h>

int main(){
    int num1, num2, num3;

    // Taking user input

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Findind the greatest

    if (num1 > num2 && num1 > num3){
        printf("The greatest number is %d", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("The greatest number is %d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf("The greatest number is %d", num3);
    }
    else{
        printf("Invalid input.");
    }
}