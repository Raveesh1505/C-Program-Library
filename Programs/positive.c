#include <stdio.h>

int main(){
    int num;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("The number is positive.");
    }
    else if (num == 0){
        printf("The number is 0 which is neither positive nor negative.");
    }
    else if (num < 0){
        printf("The number is negative.");
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}