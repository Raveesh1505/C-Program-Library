#include <stdio.h>

int palindrome(num){
    int a, temp, sum = 0;
    num = temp;

    while (num > 0){
        a = num % 10;
        sum = (sum * 10) + a;
        num = num/10;
    }

    if (sum == temp){
        printf("The number is palindrome number.");
    }
    else{
        printf("The number is not a palinrome number.");
    }
    return 0;
}

int main(){
    int num;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    // Checking and printing palindrome

    palindrome(num);

    return 0;
}