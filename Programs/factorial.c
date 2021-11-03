#include <stdio.h>

int fact(num){
    int i = 1, mult = 1;
    for (i=1; i <= num; i++){
        mult = mult*i;
    }
    printf("Factorial = %d", mult);
    return 0;

}

int main(){
    int num, i, mult=1;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    // Calculating factorial

    fact(num);
    return 0;
}