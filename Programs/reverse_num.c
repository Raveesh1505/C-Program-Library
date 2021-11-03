#include <stdio.h>

int main(){
    int num, a, sum = 0;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    // Reverse and printing

    while (num > 0){
        a = num %10;
        sum = (sum*10)+a;
        num = num/10;
    }
    printf("The number reversed is: %d", sum);
    return 0;
}