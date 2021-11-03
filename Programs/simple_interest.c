#include <stdio.h>

int main(){
    float a, p, r, t;

    // Taking user inputs

    printf("Enter the principal balance: ");
    scanf("%f", &p);
    printf("Enter the annual rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);

    // Computing and printing the SI

    a = p * (1 + ((r/100)*t)); // Formula of simple interest

    printf("Your final ammount will be: %f", a);
    return 0;
}