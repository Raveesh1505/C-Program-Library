#include <stdio.h>
#include <math.h>

int main(){
    int num, i, flag=0;

    // Taking user input

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        if (i*i == num){
            flag += 1;
        }
    }

    if (flag==0){
        printf("The number is not a perfect square.");
    }
    else{
        printf("The number is a perfect square.");
    }

    return 0;
}