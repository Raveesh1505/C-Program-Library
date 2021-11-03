#include <stdio.h>

int hcf_lcm(num1, num2){
    int i, lcm, hcf;

    for(i = 1; i<=num1; i++){
        if (num1%i == 0 && num2%i == 0){
            hcf = i;
        }
    }
    lcm = (num1 * num2)/hcf;

    // Printing the values

    printf("HCF = %d\nLCM = %d", hcf, lcm);
    return 0;
}

int main(){
    int num1, num2;

    // Taking user input

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    hcf_lcm(num1, num2);

    return 0;
}