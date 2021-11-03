#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, x1, x2;

    // Taking user input

    printf("Considering ax^2 + bx + c = 0 as ideal equation\nEnter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    // Calculating roots

    d = (pow(b, 2)) - 4 * a * c; // Calculating the discriminant

    // 2 distinct roots
    if (d > 0){
        x1 = (-b + d)/(4 * a);
        x2 = (-b - d)/(4 * a);
        printf("First root: %f\nSecond root: %f", x1, x2);
    }
    // Both equal roots
    else if (d == 0){
        x1 = (-b)/(4 * a);
        printf ("Both roots are equal = %f", x1);
    }
    // No real roots
    else if (d < 0){
        printf("No real roots exists");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}