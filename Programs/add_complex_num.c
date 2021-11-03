#include <stdio.h>
#include <math.h>

int main(){
    float n1_real, n1_imag, n2_real, n2_imag, real_res, imag_res;

    // Taking user inputs

    printf("Enter the real and imaginary part of first number seperated by space: ");
    scanf("%f %f", &n1_real, &n1_imag);
    printf("Enter the real and imaginary part of second number seperated by space: ");
    scanf("%f %f", &n2_real, &n2_imag);

    // Addition and printing the result

    real_res = n1_real + n2_real;
    imag_res = n1_imag + n2_imag;

    printf("Sum = %f + %fi", real_res, imag_res);

    return 0;
}