#include <stdio.h>
#include <math.h>

int armstrong(num){
    int a, temp, sum = 0;
    temp = num;

    while (num > 0){
        a = num % 10;
        sum = sum + (a*a*a);
        num = num/10;
    }

    if (sum == temp){
        printf("The number is an Armstrong Number.");
    }
    else{
        printf("The number is not an Armstrong Number.");
    }
    return 0;
}

int main(){
    int num;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    // Checking and printing armstrong number

    armstrong(num);
    return 0;
}