#include <stdio.h>

int main(){
    int num, a, sum = 0;

    // Taking user imput

    printf("Enter the number: ");
    scanf("%d", &num);

    // Adding the digits

    while (num > 0){
        a = num%10;
        sum = sum+a ;
        num = num / 10;
    }

    printf("The sum of digits is: %d", sum);
    return 0;
}