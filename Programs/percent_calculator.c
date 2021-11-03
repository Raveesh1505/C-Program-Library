#include <stdio.h>

int main(){
    float value, total, percentage;

    // Taking user input

    printf("Enter the value: ");
    scanf("%f", &value);
    printf("Enter the total value: ");
    scanf("%f", &total);

    // Calculation and printing

    percentage = (value/total)*100;

    printf("Percentage = %f", percentage);
    return 0;
}