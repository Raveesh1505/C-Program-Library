#include <stdio.h>

int half_pyr(rows){
    int i, j;

    for (i=1; i<=rows; i++){
        for (j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int rows;

    // Taking user input

    printf("Enter the number of rows your want to print: ");
    scanf("%d", &rows);

    // Printing the pyramid

    half_pyr(rows);
    return 0;
}